/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:59:14 by plichota          #+#    #+#             */
/*   Updated: 2026/01/19 17:24:39 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    
}

Weapon::~Weapon()
{
    
}

const std::string &Weapon::getType()
{
    return (type);
}

void Weapon::setType(std::string newType)
{
    type = newType;
}
