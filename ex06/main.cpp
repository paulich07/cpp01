/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:44:52 by plichota          #+#    #+#             */
/*   Updated: 2026/01/23 18:54:41 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
    Harl harl;

    if (argc != 2)
    {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
        return (1);
    }
    std::string level = argv[1];
    for (size_t i = 0; i <  level.length(); i++)
    {
        level[i] = std::tolower(level[i]);
    }
    harl.complain(level);
}