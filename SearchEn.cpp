#include <cstdlib>
#include <cstdio>
#include "Searching.h"
#include <Windows.h>
#include <string>
#include <string.h>
#include <iostream>

using namespace std;

class Search{
    public:
    void SearchEngine(){
        cout << "please specify your engine" << endl;
        string engine = "";
       if(engine == "edge" || (engine == "Microsoft Edge")){
           system("<Microsoft Edge> http://google.com");
       }
       else if(engine == "Firefox"){
           system("<Firefox> http://google.com");
       }
       else if(engine == "chrome"){
           system("<Google Chrome> http://google.com");
       }
    }
};
