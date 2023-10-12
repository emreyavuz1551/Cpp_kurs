#include <iostream>
#include <string>

// Silah sınıfı (üst sınıf)
class Weapon {
protected:
    std::string isim;
    int vurusGucu;

public:
    Weapon(const std::string& _isim, int _vurusGucu) : isim(_isim), vurusGucu(_vurusGucu) {}

    // Sanal fonksiyon
    virtual void Saldir() {
        std::cout << "Silah ile saldirildi. Vurus gucu: " << vurusGucu << std::endl;
    }
};

// Tabanca sınıfı (Silah sınıfından türetiliyor)
class Gun : public Weapon {
public:
    Gun(const std::string& _isim, int _vurusGucu) : Weapon(_isim, _vurusGucu) {}

    void AtesEt() {
        std::cout << "Tabanca atesleme..." << std::endl;
    }

    // Sanal fonksiyonun ezilmesi (override)
    void Saldir() override {
        std::cout << isim << " ile ates ediliyor." << std::endl;
    }
};

int main() {
    Weapon* silah1 = new Gun("Desert Eagle", 50);

    // Polimorfik çağrı: Silah türünden referans, Gun sınıfının Saldir metodunu çağırır.
    silah1->Saldir();

    delete silah1;

    return 0;
}
