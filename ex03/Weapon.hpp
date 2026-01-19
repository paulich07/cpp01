/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:59:23 by plichota          #+#    #+#             */
/*   Updated: 2026/01/19 17:52:42 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string newType);
        ~Weapon();

        const std::string &getType();
        void setType(std::string newType);
};
