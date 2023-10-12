#include <iostream>

class MyClass {
public:
    static int sharedValue; // Statik üye değişken

    MyClass() {
        sharedValue++; // Her nesne oluşturulduğunda sharedValue artırılır
    }

    static void DisplaySharedValue() {
        std::cout << "Shared Value: " << sharedValue << std::endl;
    }
};

int MyClass::sharedValue = 0; // Statik üye değişkenin tanımı ve başlatılması

int main() {
    MyClass obj1;
    MyClass obj2;

    // Statik üye fonksiyonu doğrudan çağırma
    MyClass::DisplaySharedValue(); // "Shared Value: 2" çıktısı görüntülenir

    return 0;
}
