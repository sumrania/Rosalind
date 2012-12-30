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
    string line,s,t;
    ifstream infile (filename.c_str());
    if (infile.is_open())
    {
        //read first DNAstring
        infile >> line;
        s = line;
        
        //read 2nd DNAstring
        infile >> line;
        t = line;
    }
    else
        printf("Error: Unable to open file!\n");
    
    int count =0;
    for (unsigned int i=0; i<s.length(); i++)
    {
        //hamming distance
        if(s[i] != t[i])
            count++;
    }
    cout << count;
    printf("\n");
}
