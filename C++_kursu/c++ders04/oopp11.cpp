#include <iostream>

class Silah {
private:
    int deger = 59;

public:
    int get() const {
        return deger;
    }
};

int main() {
    Silah silah;
    const Silah* ptr_silah = &silah; // const Silah sınıfının işaretçisi

    // İşaretçi üzerinden "get" işlemini çağırabiliriz, çünkü işlev "const" olarak işaretlendi.
    int deger = ptr_silah->get();

    std::cout << "Silah degeri: " << deger << std::endl;
    return 0;
}
