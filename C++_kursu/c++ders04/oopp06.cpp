#include <iostream>
#include <string>

class Weapon {
protected:
    std::string isim;
    int vurusGucu;

public:
    Weapon(const std::string& _isim, int _vurusGucu) : isim(_isim), vurusGucu(_vurusGucu) {}

    void Saldir() {
        std::cout << this->isim << " ile saldirildi. Vurus gucu: " << this->vurusGucu << std::endl;
    }
};

class Gun : public Weapon {
public:
    Gun(const std::string& _isim, int _vurusGucu) : Weapon(_isim, _vurusGucu) {}

    void AtesEt() {
        std::cout << this->isim << " ile ates ediliyor." << std::endl;
    }

    void HizliAtes() {
        std::cout << "Hizli ates ediliyor." << std::endl;
        this->AtesEt(); // this kullanarak kendi üye işlemini çağırabiliriz.
    }
};

int main() {
    Gun tabanca("Desert Eagle", 50);

    tabanca.Saldir();
    tabanca.AtesEt();
    tabanca.HizliAtes();

    return 0;
}
