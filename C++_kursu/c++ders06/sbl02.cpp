#include <iostream>

template <typename T>
class Mat {
public:
    T a{};
    T b{};

    T topla() {  // topla() fonksiyonu artık parametre almıyor
        return a + b;
    }
};



int main() {
    Mat<int> mat;
    mat.a = 10;
    mat.b = 20;

    std::cout << mat.topla() << std::endl; // mat.topla() sonucunu yazdır
    return 0; // main() fonksiyonundan doğru bir şekilde çıkış yap
}
