#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input,s;
    std::cout << "Enter phrase";
    std::getline(std::cin, input); 
    int d,e;
    std::cout << "Enter shift value";
    std::cin >> e;
    size_t i;
    size_t l= input.length();
    char c;
    for (i=0;i<l;i++){
        c=input[i];
        d=c;
        if (((d>67)&&(d<91))||((d>99)&&(d<123))){
            d-=e;}
        else{
            d=d-e+26;
        }
        c=d;
        s+=c;
    }
    std::cout << s;
    return 0;
}
