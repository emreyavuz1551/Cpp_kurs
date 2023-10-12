#include <iostream>

int main() {
    // Bir tamsayı için heap bellek tahsisi
    int* ptr = new int; // int türünden bir işaretçi oluşturur, ancak henüz bellek tahsis etmez

    if (ptr == nullptr) {
        std::cerr << "Bellek tahsisi başarısız." << std::endl;
        return 1;
    }

    // Heap belleğe bir değer atama
    *ptr = 42;

    // Değerin ekrana yazdırılması
    std::cout << "Heap bellekteki değer: " << *ptr << std::endl;

    // Bellek temizleme (önemli!)
    delete ptr; // Belleği geri verir ve bellek sızıntısını önler

    return 0;
}
