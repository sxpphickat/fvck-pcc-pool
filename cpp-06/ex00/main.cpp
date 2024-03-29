/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:34:48 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/23 13:07:05 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char** argv)
{
	if (argc != 2) {
		std::cout << "error" << std::endl;
		return (0);
	}
	ScalarConverter::convert(std::string(argv[1]));

	return (0);
}