#include <iostream>

int main() {
    int secim;

    std::cout << "Bir sayi girin (1-3 arasi): ";
    std::cin >> secim;

    switch (secim) {
        case 1:
            std::cout << "Birinci secenek secildi." << std::endl;
            break;
        case 2:
            std::cout << "Ikinci secenek secildi." << std::endl;
            break;
        case 3:
            std::cout << "Ucuncu secenek secildi." << std::endl;
            break;
        default:
            std::cout << "Gecersiz secim." << std::endl;
            break;
    }

    return 0;
}


int main() {
    int secim;

    std::cout << "Bir sayi girin (1-3 arasi): ";
    std::cin >> secim;

    switch (secim) {
        case 1:
            std::cout << "Birinci secenek secildi." << std::endl;
            break;
        case 2:
            std::cout << "Ikinci secenek secildi." << std::endl;
            break;
        case 3:
            std::cout << "Ucuncu secenek secildi." << std::endl;
            break;
        default:
            std::cout << "Gecersiz secim." << std::endl;
            break;
    }

    return 0;
}
