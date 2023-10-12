#include <iostream>
#include <string>

class Weapon {
protected:
    std::string isim;
    int vurusGucu;

public:
    Weapon(const std::string& _isim, int _vurusGucu) : isim(_isim), vurusGucu(_vurusGucu) {}

    virtual void Saldir() {
        std::cout << "Silah ile saldirildi. Vurus gucu: " << vurusGucu << std::endl;
    }
};

class Gun : public Weapon {
public:
    Gun(const std::string& _isim, int _vurusGucu) : Weapon(_isim, _vurusGucu) {}

    void AtesEt() {
        std::cout << "Tabanca atesleme..." << std::endl;
    }

    // Sanal metodun ezilmesi (override)
    void Saldir() override {
        std::cout << isim << " ile ates ediliyor." << std::endl;
    }
};

int main() {
    Weapon* silah1 = new Gun("Desert Eagle", 50);

    silah1->Saldir(); // Polimorfik çağrı, Gun sınıfının Saldir metodunu çağırır.

    delete silah1;

    return 0;
}
