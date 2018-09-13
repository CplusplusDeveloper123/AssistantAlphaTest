#ifndef _FileSystemSearch.h_
#define _FileSystemSearch_

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
    void Searching(){
       WIN32_FIND_DATA File;
        HWND search_handle = FindFirstFile(LPCWSTR(DATA_DIR C_str{}, &file));
    }
};

#endif // !1