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
        //  printf("A   C   G   T\n");
        if (infile.is_open())
        {
            while (getline(infile, line))
            {
                vector<int> numnt(4,0);
                //creating a new vector
                int counterA=0, counterC=0, counterG=0, counterT =0;
                
                for (unsigned int i=0; i <line.length(); i++)
                {
                    if (line[i]== 'A')
                    {
                        counterA += 1;
                    }
                    else if (line[i] == 'C')
                    {
                        counterC += 1;
                    }
                    else if (line[i] == 'G')
                    {
                        counterG += 1;
                    }
                    else if (line[i] == 'T')
                    {
                        counterT += 1;
                    }
                    
                }
                printf("%i %i %i %i\n",counterA, counterC, counterG, counterT);
                
            }
        }
        else
            printf("Error: Unable to open file!\n"); 
}