#include <iostream>
#include <iterator> //for std::size

void test(int dizi[3],int size){
    //std::cout << dizi;
    for ( int i = 0; i < size; i++)
    {
        std::cout << dizi[i] << std::endl;
    }
    
}

int main(){
    int dizi[3]{1,2,3};
    int size = 3;
    test(dizi,size);
     
}