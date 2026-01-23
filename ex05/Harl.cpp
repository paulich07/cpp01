/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:45:27 by plichota          #+#    #+#             */
/*   Updated: 2026/01/23 15:37:07 by plichota         ###   ########.fr       */
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
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void    Harl::complain(std::string level)
{
    
    
    if (level == "debug")
    {
        debug();
    }
    else if (level == "info")
    {
        debug();
    }
    else if (level == "warning")
    {
        warning();
    }
    else if (level == "error")
    {
        warning();
    }
    else
    {
        std::cout << "Invalid level" << std::endl;
    }
}
