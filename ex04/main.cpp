/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 11:53:04 by plichota          #+#    #+#             */
/*   Updated: 2026/01/22 16:42:48 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2]; // replace
    std::string s2 = argv[3]; // with

    // apro stream
    std::ifstream file1(filename);
    std::ofstream file2(filename + ".replace");
    
    std::string buff;
    
    while (std::getline(file1, buff))
    {
        file2 << buff << std::endl;
        std::cout << buff << std::endl;
        // find occorrenza
        // buff.find
        // std::string::npos + .length()
        
    }

    file1.close();    
    file2.close();
}