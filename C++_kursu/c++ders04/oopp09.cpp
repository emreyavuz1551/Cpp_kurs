#include <iostream>
#include <string>

// Silah sınıfı (üst sınıf)
class Weapon {
protected:
    std::string isim;
    int vurusGucu;

public:
    Weapon(const std::string& _isim, int _vurusGucu) : isim(_isim), vurusGucu(_vurusGucu) {}

    // Sanal metot
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

    // Sanal metotun ezilmesi (override)
    void Saldir() override {
        std::cout << isim << " ile ates ediliyor." << std::endl;
    }
};

int main() {
    Weapon* silah1 = new Gun("Desert Eagle", 50);

    // Polimorfik çağrı: Silah türünden referans, Gun sınıfının Saldir metodu tarafından ezer.
    silah1->Saldir(); // "Desert Eagle ile ates ediliyor."

    delete silah1;

    return 0;
}
