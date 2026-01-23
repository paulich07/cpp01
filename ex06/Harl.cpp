/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:45:27 by plichota          #+#    #+#             */
/*   Updated: 2026/01/23 18:50:28 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout   << "I cannot believe adding extra bacon costs more money."
                << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout   <<  "I think I deserve to have some extra bacon for free." 
                << "I've been coming for years, whereas you started working here just last month." << std::endl;
}

void    Harl::error(void)
{
    std::cerr << "[ ERROR ]" << std::endl;
    std::cerr << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void    Harl::complain(std::string level)
{
    int x = -1;
    void (Harl::*foo[])() =
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    std::string levels[] =
    {
        "debug",
        "info",
        "warning",
        "error"
    };

    // find x
    int n = sizeof(levels) / sizeof(levels[0]);
    for (int i = 0; i < n; i++)
    {
        if (level == levels[i])
            x = i;
    }
    
    // print all above x (included)
    switch (x)
    {
        case 0:
            (this->*foo[0])();
        case 1:
            (this->*foo[1])();
        case 2:
            (this->*foo[2])();
        case 3:
            (this->*foo[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
