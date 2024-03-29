/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:26:01 by vipereir          #+#    #+#             */
/*   Updated: 2023/05/25 14:15:00 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <string>
# include <cctype>
# include <cstdlib> // 

# define RED "\033[0;31m"
# define ENDC "\033[0m"
class Contact {
    private:
        std::string _FirstName;
        std::string _LastName;
        std::string _NickName;
        std::string _PhoneNumber;
        std::string _DarkestSecret;
    public:
        Contact(void);
        ~Contact(void);
        void setFirstName(void);
        void setLastName(void);
        void setNickName(void);
        void setPhoneNumber(void);
        void setDarkestSecret(void);

        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickName(void);
        std::string getPhoneNumber(void);
        std::string getDarkestSecret(void);
};

bool	    is_nubmer(std::string number);
std::string	format_string(std::string to_format);
int         fake_toi(std::string number);
std::string try_set_number(std::string msg);
std::string try_set(std::string msg);

#endif