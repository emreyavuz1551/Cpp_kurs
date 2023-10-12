#include <iostream>
#include <iterator> //for std::size

void test(char dizi[]){
    std::cout << dizi;
    // for ( int i = 0; i < 3; i++)
    // {
    //     std::cout << dizi[i] << std::endl;
    // }
    
}

int main(){
    char e[]{'a', 'b', 'c'};
    test(e);
}