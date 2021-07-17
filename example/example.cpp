#include <iostream>   //including a library that will let is work with io objects
#include "../lvCpp.h" //including library header file so now we can use it's objects like drawLVChar function

using namespace std;

int main() {
    cout << "So when you've choosen parameter and called function, it will print the letter you need\n\t";
    //ATTENTION: parameter for drawLVChar function HAS TO BE STRING {Example: drawLVChar("nn");} and NOT undefined variable {Example: drawLVChar(nn);}
    lvCpp::drawLVChar("u");
    //after you call drawLVChar it will print Ņ to console because parameter here is "nn" (check lvCpp-master\lvCpp.h to see what parameters are available)
    cout << "\nAs you can see, it printed the letter 'ū' (probably your console won't print this letter right but it was supposed to be letter from string above)" << endl;
    getchar(); //prevent console from closing
    return 0;
}
