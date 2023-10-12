#include <iostream>

int main() {
    int sayi;

    do {
        std::cout << "Bir pozitif sayi girin: ";
        std::cin >> sayi;

        if (sayi <= 0) {
            std::cout << "Girilen sayi pozitif degil. Tekrar deneyin." << std::endl;
        }
    } while (sayi <= 0);

    std::cout << "Girdiginiz pozitif sayi: " << sayi << std::endl;

    return 0;
}
