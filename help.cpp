#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <string.h>
#include <windows.h>
#include "help.h"
#include <vector>
#include "Sayings.h"
#include "JoshsSection.h"
#include "Filesystem.h"
#include "Searching.h"

using namespace std;

class Helper
{
  public:
   void Print()
    {
        cout << "welcome to help! im BooLi'an" << endl;
        cout << "what may i do for you" << endl;
        string response = "";
        cin >> response;
        if (response == ("search file system"))
        {
            Helper helping;
            helping.Search();
        }
        else if (response == "play music")
        {
            Helper helping;
            helping.PlayMusic();
        }
        else if(response == "do math"){
            iipuu *iipu = new iipuu;
            iipu -> JoshSection();
        }
    }
    void Search()
    {
        FileSystem f1;
        f1.Searching();
    }

    void PlayMusic()
    {
        cout << "would you like to add songs to the list" << endl;
		string answer = "";
		if (answer == ("yes")) {
			vector <string> SongList;
			SongList.push_back("");
			SongList.push_back("");
			SongList.push_back("");
			if (answer == ("no")){
				cout << SongList.size;
			}
		}
        else if(answer == ("play")){
            cout << "would you like to play a song" << endl;
            bool IsPlaying = false;
            string play = "";
            cin >> play;
            if(play == ("yes")){
                IsPlaying = true;
                do{
                    //PlaySound();
                }
                while(IsPlaying);
            }
        }
        else if(answer == ("tell me something funny")){
            SayStuff s1;
            s1.SayThings();
        }
        else if(answer == "search internet"){
            Search s1;
            s1 -> SearchEngine();
        }
    }
};