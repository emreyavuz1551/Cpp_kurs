#include <iostream>

class Hesapla
{   
    public:
        int genislik;
        int yukseklik;
        int alan;

        void giris(){
            std::cout <<"Yükseklik gir";
            std::cin >> yukseklik;

            std::cout <<"genişlik gir";
            std::cin >> genislik;
        }
        void hesapla(){
            alan = yukseklik * genislik;
            std::cout <<alan;
        }
};

int main()
{
    Hesapla hesap;
    hesap.giris();
    hesap.hesapla();

}