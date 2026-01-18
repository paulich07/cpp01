/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 16:34:20 by plichota          #+#    #+#             */
/*   Updated: 2026/01/18 18:20:45 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    size_t n = 5;
    Zombie *arr = zombieHorde(n, "Bob");
    
    for (size_t i = 0; i < n; i++)
        arr[i].announce();
    
    delete[] arr;
}
