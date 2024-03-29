/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:19:32 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/18 12:51:59 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_H
# define AForm_H
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	
	public:
		AForm();
		AForm(std::string name, int grade_to_sign, int grade_to_exec);
		AForm(const AForm& other);
		virtual ~AForm();
		
		AForm& 					operator=(const AForm& other);
		friend std::ostream&	operator<<(std::ostream& out, const AForm& obj);
		
		const std::string&		getName(void) const;
		bool					getIsSigned(void) const;
		int						getGradeToSign(void) const;
		int						getGradeToExec(void) const;
		bool					checkRequirements(const Bureaucrat& obj) const;
		void					beSigned(const Bureaucrat& obj);
		virtual bool			execute(const Bureaucrat& executor) const = 0;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what(void) const throw();	
		};

	private:
		const std::string	_name;
		bool				_is_signed;
		const int 			_grade_to_sign;
		const int 			_grade_to_exec;
};

#endif