#include <iostream>
#include <fstream>
#include <Windows.h>
#include "FileSystemSearch.h"
#include <cstdio>
#include <cstdlib>
#include <tchar.h>

using namespace std;

class FileSystem{
    public:
    void Searching(const char* DATA){
        WIN32_FIND_DATA File;
        HWND search_handle = FindFirstFile(LPCWSTR(DATA C_str{}, &file));
        if(search_handle){
            do{
                cout << File.cFileName << endl;
            }
            while(FindNextFile(search_handle, &File));
            FindClose(search_handle);
        }
    }
}