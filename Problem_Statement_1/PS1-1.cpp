#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input,s;
    int temp, shift;
    std::cout<<"Enter phrase ";
    std::getline(std::cin, input); 
    std::cout<<"Enter shift ";
    std::cin>>shift;
    size_t i;
    size_t l= input.length();
    char c;
    for (i=0;i<l;i++){
        c=input[i];
        temp=c;
    if ((temp>96)&&(temp<123)){
        if (temp<97+shift){
                temp+=26-shift;}
        else{temp-=shift;}}
    else if ((temp>64)&&(temp<91)){
        if (temp<65+shift){
               temp+=26-shift;}
        else{temp-=shift;}
            }
        c=temp;
        s+=c;   
        }
    std::cout << s;
    return 0;
    }
