//
//  File.cpp
//  Rosalind
//
//  Created by Shefali Umrania on 10/15/12.
//  Copyright (c) 2012 Shefali Umrania. All rights reserved.
//
#include "Readfile.h"
#include <stdio.h>
#include <iostream>
using namespace std;
#include <string.h>
using namespace std;
#include <iterator>
using namespace std;
#include <vector>
using namespace std;
#include <fstream>
using namespace std;
#include <iomanip>
#include <map>
using namespace std;


void Readfile::parser(string filename)
{
        string line;
        std::ifstream infile(filename.c_str());

        if (infile.is_open())
        {
            while (getline(infile, line))
            {
                //substitution of T into U
                for (unsigned int i=0; i <line.length(); i++)
                {
                    if (line[i] == 'T')
                    {
                        line[i] = 'U';
                    }
                    //prints the new RNA line
                    printf("%c", line[i]); 
                    
                }                
            }
            printf("\n");
        }
        else
            printf("Error: Unable to open file!\n"); 
}