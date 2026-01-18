/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 16:34:20 by plichota          #+#    #+#             */
/*   Updated: 2026/01/18 17:29:47 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie z("STACK_ZOMBIE");
    z.announce();
    
    randomChump("CHUMP_ZOMBIE");

    Zombie *heap_z = newZombie("HEAP_ZOMBIE");
    heap_z->announce();
    delete heap_z;
}