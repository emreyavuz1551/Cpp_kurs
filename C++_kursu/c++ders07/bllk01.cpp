#include <iostream>

class Silah{
public:
    Silah(){
        std::cout <<"Oluştu";
    }
    ~Silah(){
        std::cout <<"Silindi";
    }
};



int main(){

    int adet = 0;
    std::cout << "Dizi boyutu nedir?" <<std::endl;
    std::cin >> adet;
    int* dizi = new int[adet];

    for (int i = 0; i < adet; i++)
    {
        std::cin >> dizi[i];
    }
    std::cout <<"Girilen Elemlar" << std::endl;

    for (int i = 0; i < adet; i++)
    {
        std::cout << dizi[i];
    }
    
    delete[] dizi;
    
    // int* a = new int;
    // *a = 10;
    // delete a;
    // Silah* silah = new Silah;
    // delete silah;
    // Silah* silah; 
    // {
    //    silah = new Silah;
    // }

    // delete silah;
    

    // std::cout << "Hello World";
}