/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:59:23 by plichota          #+#    #+#             */
/*   Updated: 2026/01/19 17:30:03 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        ~Weapon();

        const std::string &getType();
        void setType(std::string newType);
};
