#include <iostream>
#include <string>

// Silah sınıfı
class Weapon {
protected:
    std::string isim;
    int vurusGucu;

public:
    Weapon(const std::string& _isim, int _vurusGucu) : isim(_isim), vurusGucu(_vurusGucu) {}

    void Saldir() {
        std::cout << isim << " ile saldirildi. Vurus gucu: " << vurusGucu << std::endl;
    }
};

// Tabanca sınıfı (Silah sınıfından türetiliyor)
class Gun : public Weapon {
public:
    Gun(const std::string& _isim, int _vurusGucu) : Weapon(_isim, _vurusGucu) {}

    void AtesEt() {
        std::cout << "Tabanca atesleme..." << std::endl;
    }
};

// Kılıç sınıfı (Silah sınıfından türetiliyor)
class Sword : public Weapon {
public:
    Sword(const std::string& _isim, int _vurusGucu) : Weapon(_isim, _vurusGucu) {}

    void Kes() {
        std::cout << "Kilic kesme..." << std::endl;
    }
};

int main() {
    Gun tabanca("Desert Eagle", 50);
    Sword kilic("Excalibur", 80);

    Weapon& silah1 = tabanca; // Referans kullanımı
    Weapon* silah2 = &kilic;  // Pointer kullanımı

    silah1.Saldir();
    silah1.Saldir();

    silah2->Saldir(); // Arrow operatörü ile pointer kullanımı
    silah2->Saldir();

    return 0;
}
