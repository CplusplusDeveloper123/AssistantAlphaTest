// pre processor directives
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <string.h>
#include <windows.h>
#include <fstream>
#include <windows.data.json.h>
#include "Help.h"
#include "Sayings.h"
#include "Trolley.h"
#include "UserCreation.h"

using namespace std;
// standard library

class MainClass // self explainitory
{
  public: // can be accessed by everything
    int main() // main = starting point
    {
        cout << "hello welcome to BooLi'An" << endl;
        // print welcome messages
        cout << "please enter your name if applicable" << endl;
        cout << "you may register for an account" << endl;
        string Account = "";
        cin >> Account;
        // enter account details
        while(Account == "i dont have one")
        {
            UserCreation *u1;
            u1 -> CreateAccount();
        }
        // while you dont have one make one!
        // set boolean to false 
        bool IsNamed = false;
        string name = "";
        cin >> name;
        cout << "hello" + name << endl;
        // user puts in name and software says ok you have a name proceed
        if (name != "")
        {
            // set boolean to true if you have a name
            IsNamed == true;
            // when the user enters their name we'll ask them for help
           // do while we have a name entered attempt at name storage failed!
            do
            {
                cout << "transfering to helper class" << endl;
                Helper helping;
                helping.print();
            } while (IsNamed);
        }
        else if (name != "" && (name == "molly"))
        {
            // if your molly troxel we call this because she's awesome
            MollysClass *M1;
            M1 -> molly();
        }
        return 0;
    }
}; 

// class endings require ;

// -> gets references

// * & pointer operators

// objects require pointers