//
//  main.cpp
//  Rosalind
//
//  Created by Shefali Umrania on 10/15/12.
//  Copyright (c) 2012 Shefali Umrania. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Readfile.h"

int main(int argc, const char * argv[])
{
    
    Readfile* M = new Readfile();
    M->parser("rosalind_prob.txt");
    
    return 0;
    
}

