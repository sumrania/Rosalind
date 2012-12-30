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
    int num, perm, factorial;
    std::ifstream infile(filename.c_str());
    
    if (infile.is_open())
    {
        //get permutation length from file
        infile >> num;
        perm = num;
    }
    else
        printf("Error: Unable to open file!\n");
    
    //print the factorial = total number of permutations
    for (int i=0; i<=perm; i++)
    {
        if (i == 0)
            factorial = 1;
        else
            factorial = factorial * i;
    }
    cout << factorial << endl;
    
    //add to vector
    vector<int> permvec;
    for (int i = 1; i <= perm; i++)
    {
        permvec.push_back(i);
    }
    
    //list all permutations
    do {
        for (unsigned int j = 0; j <permvec.size(); j++)
        {
            cout << permvec[j] << " ";
        }
        printf("\n");
        
    } while (next_permutation(permvec.begin(), permvec.end()));
}
