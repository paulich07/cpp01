/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:59:14 by plichota          #+#    #+#             */
/*   Updated: 2026/01/19 17:59:03 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string newType) : type(newType)
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
