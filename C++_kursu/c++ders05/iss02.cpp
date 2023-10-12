#include <iostream>
#include <stdexcept> // Hata işleme için stdexcept başlık dosyasını dahil ediyoruz

double divide(double a, double b) {
    if (b == 0.0) {
        // Hata durumunda bir istisna (exception) fırlatıyoruz
        throw std::invalid_argument("Bölünen sıfır olamaz");
    }
    return a / b;
}

int main() {
    try {
        double num1, num2;
        std::cout << "Birinci sayıyı girin: ";
        std::cin >> num1;
        std::cout << "İkinci sayıyı girin: ";
        std::cin >> num2;

        double result = divide(num1, num2);
        std::cout << "Sonuç: " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        // Hata yakalandığında çalışacak kod bloğu
        std::cerr << "Hata yakalandı: " << e.what() << std::endl;
    } catch (...) {
        // Diğer türdeki hataları yakalamak için kullanılabilir
        std::cerr << "Bilinmeyen bir hata oluştu." << std::endl;
    }

    return 0;
}
