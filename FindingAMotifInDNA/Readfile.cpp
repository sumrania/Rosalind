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

void  Readfile::parser(string filename)
{
    string line, read, kmer;
    std::ifstream infile(filename.c_str());
    
    if (infile.is_open())
    {
        while (getline(infile, line))
        {
            read = line;
            infile >>line;
            kmer = line;
        }
    }
    else
        printf("Error: Unable to open file!\n");
    
    //  printf("%s\n\n\n %s\n", read.c_str(), kmer.c_str());
    
    //start of location
    string::size_type start_pos =0;
    
    //iterating position number to find the read
    while (string::npos != (start_pos = read.find(kmer, start_pos)))
    {
        start_pos++;
        printf("%i ", (int) start_pos);
    }
    printf("\n");
}
