/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 11:53:04 by plichota          #+#    #+#             */
/*   Updated: 2026/01/23 14:41:53 by plichota         ###   ########.fr       */
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
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2]; // replace
    std::string s2 = argv[3]; // with

    size_t l1 = s1.length();

    // check empty string: s1 cannot be empty (it does not make sense)
    if (s1.empty())
    {
        std::cerr << "The first argument should not be an empty string" << filename << std::endl;
        return (1);
    }
    
    std::ifstream file1(filename.c_str());
    if (file1.fail())
    {
        std::cerr << "Error with file opening: " << filename << std::endl;
        return (1); 
    }

    std::ofstream file2((filename + ".replace").c_str());

    std::string buff;
    size_t pos;    
    while (std::getline(file1, buff))
    {
        // replacing one occurrence of s1 with s2.
        pos = buff.find(s1);
        while (pos != std::string::npos && pos > 0)
        {
            buff.erase(pos, l1);
            buff.insert(pos, s2);
            
            pos = buff.find(s1);
        }
        // debug
        // std::cout << buff << std::endl;
        // to file
        file2 << buff << std::endl;
    }
    // saves effectively the file
    file1.close();
    file2.close();
}