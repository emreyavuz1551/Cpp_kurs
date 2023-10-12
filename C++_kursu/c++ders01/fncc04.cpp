#include <iostream>
#include <string>

inline int topla(int a, int b) {
    return a + b;
}

int main() {
    int a = 5;  // 'a' değişkenini tanımla ve başlat
    int b = 3;  // 'b' değişkenini tanımla ve başlat
    int sonuc = topla(a, b);  // 'topla' fonksiyonunu kullanarak sonucu hesapla ve 'sonuc' değişkenine kaydet
    std::cout << "topla(a, b) fonksiyonunun sonucu: " << sonuc << std::endl;
    return 0;
}
