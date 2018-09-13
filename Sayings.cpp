#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <string.h>
#include <windows.h>
#include "Main.h"

using namespace std;

class SayStuff
{
  public:
    void SayThings()
    {
        cout << "do you want to hear something funny" << endl;
        string yeah = "";
        if (yeah == "yes")
        {
            vector <string> lols;
            lols.push_back("what'd soup say to it's creator, Can It!");
            lols.push_back("ah hi C i see you have no Class");
            lols.push_back("what's a ghost programmers favorite data type, the Boolean");
            for (int i = 0; i < lols.size;)
            {
                
            }
        }
        else if (yeah == "no")
        {
            MainClass m1;
            m1.main();
        }
    }
};