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
    float num, probAT, probGC, probFinal;
    vector<float> gcvec;
    
    std::ifstream infile(filename.c_str());

    if (infile.is_open())
    {
        //get GC content from file
        while(infile >> num)
            gcvec.push_back(num);
    }
    else
        printf("Error: Unable to open file!\n");
    
    //iterate through array
    for (unsigned int i=0; i<gcvec.size(); i++)
    {
        //calculate individual probabilites of each pair
        probGC = gcvec[i] / 2;
        probAT = (1 - gcvec[i]) / 2;
        
        //probability of 2 randomly chosen symbols
        probFinal = 2 * ((probAT) * (probAT) + (probGC) * (probGC));
        printf("%f ", probFinal);
    }
    printf("\n");
}
