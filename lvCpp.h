#include <iostream>
#include <fcntl.h>
#include <io.h>
#include <string>

namespace lvCpp{

    void drawLVChar(std::string str){
        _setmode(_fileno(stdout), _O_U16TEXT);
        const std::string params[22] = { "a", "A", "c", "C", "e", "E",
                                        "g", "G", "i", "I", "k", "K",
                                        "l", "L", "n", "N", "s", "S",
                                        "u", "U", "z", "Z" };
        const wchar_t* charsLV[22] = { L"\x101", L"\x100", L"\x10d", L"\x10c",
                                    L"\x113", L"\x112", L"\x123", L"\x122",
                                    L"\x12b", L"\x12a", L"\x137", L"\x136",
                                    L"\x13c", L"\x13b", L"\x146", L"\x145",
                                    L"\x161", L"\x160", L"\x16b", L"\x16a",
                                    L"\x17e", L"\x17d" };
        for(int i=0; i<22; i++){
            if(str == params[i]){
                wprintf(charsLV[i]);
                break;
            }
        }
        _setmode(_fileno(stdout), _O_TEXT);
    }
    
}
