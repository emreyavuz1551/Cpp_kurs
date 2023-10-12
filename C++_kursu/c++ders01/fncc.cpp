#include <iostream>
void mesaj(){
    std::cout<<"Merhaba\n";
}
int toplam(int sayi1,int sayi2){
    mesaj();
    return sayi1 + sayi2;
}

int main(){
    std::cout<<toplam(5,5);
}