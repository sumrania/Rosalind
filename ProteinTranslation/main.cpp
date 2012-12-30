//
//  main.cpp
//  Rosalind
//
//  Created by Shefali Umrania on 10/15/12.
//  Copyright (c) 2012 Shefali Umrania. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Prot.h"

int main(int argc, const char * argv[])
{

    // insert code here...
//    cout << "Hello, World!\n";
    
    Prot* M = new Prot();
    M->parser("rosalind_dataset.txt");
    
    
    return 0;
    
}

