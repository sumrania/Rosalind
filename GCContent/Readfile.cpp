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
    string rnastring, word, stringid;
    char lineindent;
    
    typedef map<float, string> my_map;
    my_map maxmap;
    
    vector<float> contentvec;
    std::ifstream infile(filename.c_str());

    if (infile.is_open())
    {
        while (infile >> lineindent)
        {
            infile >> word;
            stringid = word;
            //     cout << stringid << endl;

            //iterating through the rnastring
            infile >> word;
            string line = word;
            
            int count=0;
            //   cout << line << " " <<endl;
            for (unsigned int i=0; i<line.length(); i++)
            {
                if (line[i] =='C' || line[i] == 'G')
                    count ++;
                else if(line[i] == ' ')
                    break;
            }
            
            //calculate GC content
            float content = (float) count / (float) line.length() * 100;

            //  cout << content <<endl;
            
            //store in map
            maxmap[content] = stringid;
            
            //contentvec.push_back(content);
        }
        
        float max_key; string max_value;
        
        //display it in the map
        for (my_map::iterator it = maxmap.begin(); it != maxmap.end(); it++)
        {
            max_key = max(max_key, it->first);
        }
        
        cout << maxmap[max_key] << "\n" << fixed << setprecision(6) << max_key << "%";
    }
    
    else
        printf("Error: Unable to open file!\n");
    
    printf("\n");
    
}
