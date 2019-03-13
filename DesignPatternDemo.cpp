//
// Created by Qiwei Han on 2019-03-13.
//
#include <iostream>
#include <cstudio>
#include <string>
#include <vector>
#include <fstream>
#include <boost/lexical_cast.cpp>

using namespace std;
using namespace boost;

struct Journal{
    string title;
    vector<string> entries;

    Journal(const string &title): title(title){}

    void add_entry(const string& entry)
    {
        static int count = 1;
        entries.push_back(lexical_cast<string>(count++) + ": " + entry );
    }

    





};
