#include "Main.h"
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <string.h>
#include <windows.h>
#include <fstream>
#include "UserAmount.h"

using namespace std;

class UserCreation
{
    public:
     void CreateAccount()
    {
        string username;
        string password;
        cout << "create user name" << endl;
        cin >> username;
        cout << "create a password" << endl;
        cin >> password;
        ofstream CreateAccounts;
        CreateAccounts.open("account.txt");
        CreateAccounts << username << " " << password << endl;
        CreateAccounts.close();
        cout << "welcome" + username << endl;
        if(username != "" && (password != ""))
        {
           bool UserCreated = true;
            do
            {
                MainClass *ThisClass;
                ThisClass -> main();
                UserAmount *u1;
                u1 -> Amount();
            }
            while(UserCreated);
        }
        else if(username == "" && (password == ""))
        {
            cout << "error occured could not make account" << endl;
            MainClass *MyPtr;
            MyPtr -> main();
        }
    }
};