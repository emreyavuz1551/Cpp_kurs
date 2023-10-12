#include <iostream>

int main() {
    int sayi;

    std::cout << "Bir sayi girin: ";
    std::cin >> sayi;

    if (sayi > 0) {
        std::cout << "Girdiginiz sayi pozitif." << std::endl;
    } else if (sayi < 0) {
        std::cout << "Girdiginiz sayi negatif." << std::endl;
    } else {
        std::cout << "Girdiginiz sayi sifir." << std::endl;
    }

    return 0;
}
