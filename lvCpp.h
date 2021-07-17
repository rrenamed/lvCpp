#include <iostream>
#include <fcntl.h>
#include <io.h>
#include <string>

namespace lvCpp{

    void drawLVChar(std::string str){
        _setmode(_fileno(stdout), _O_U16TEXT);
        #pragma region init params + chars
        const std::string params[22] = {
                                        "a",
                                        "A",
                                        "c",
                                        "C",
                                        "e",
                                        "E",
                                        "g",
                                        "G",
                                        "i",
                                        "I",
                                        "k",
                                        "K",
                                        "l",
                                        "L",
                                        "n",
                                        "N",
                                        "s",
                                        "S",
                                        "u",
                                        "U",
                                        "z",
                                        "Z"
                                        };
        const wchar_t* charsLV[22] = {   
                                    L"\x101", //ā
                                    L"\x100", //Ā
                                    L"\x10d", //č
                                    L"\x10c", //Č
                                    L"\x113", //ē
                                    L"\x112", //Ē
                                    L"\x123", //ģ
                                    L"\x122", //Ģ
                                    L"\x12b", //ī
                                    L"\x12a", //Ī
                                    L"\x137", //ķ
                                    L"\x136", //Ķ
                                    L"\x13c", //ļ
                                    L"\x13b", //Ļ
                                    L"\x146", //ņ
                                    L"\x145", //Ņ
                                    L"\x161", //š
                                    L"\x160", //Š
                                    L"\x16b", //ū
                                    L"\x16a", //Ū
                                    L"\x17e", //ž
                                    L"\x17d"  //Ž
                                };
    #pragma endregion
        #pragma region loop
        for(int i=0; i<22; i++){
            if(str == params[i]){
                wprintf(charsLV[i]);
                break;
            }
            else
                continue;
        }
    #pragma endregion
        _setmode(_fileno(stdout), _O_TEXT);
    }
    
}