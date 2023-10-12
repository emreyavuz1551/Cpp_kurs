#include <iostream>

// İleri bildirim (forward declaration) - B sınıfını tanımlayacağımızı belirtiyoruz
class B;

class A {
private:
    int privateData = 42;

public:
    A() {}

    // B sınıfını friend olarak tanımlama
    friend class B;

    // A sınıfının özel bir üye işlevi
    void DisplayData() {
        std::cout << "A sınıfının özel verisi: " << privateData << std::endl;
    }
};

class B {
public:
    void AccessAData(A& a) {
        // B sınıfı, A sınıfının özel verisine erişebilir
        std::cout << "B sınıfı, A sınıfının özel verisine erişti: " << a.privateData << std::endl;
    }
};

int main() {
    A objA;
    B objB;

    // A sınıfının özel üye işlevini çağırma
    objA.DisplayData();

    // B sınıfı, A sınıfının özel verisine erişebilir
    objB.AccessAData(objA);

    return 0;
}
