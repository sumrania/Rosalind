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
                vector<char> read;
                for (unsigned int i=0; i<line.length(); i++)
                {
                    if (line[i] =='A')
                    {
                        line[i] = 'T';
                    }
                    else if (line[i] =='C')
                    {
                        line[i] = 'G';
                    }
                    else if (line[i] =='G')
                    {
                        line[i] = 'C';
                    }
                    else if (line[i] =='T')
                    {
                        line[i] = 'A';
                    }
                    read.push_back(line[i]);
                }
                reverse(read.begin(), read.end());
                for (vector<char>::iterator it=read.begin(); it!=read.end(); ++it)
                    cout << *it;
            }
            printf("\n");
        }
        else
            printf("Error: Unable to open file!\n"); 
}