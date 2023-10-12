#include <iostream>
#include <string>

// Silah sınıfı (üst sınıf)
class Weapon {
protected:
    std::string isim;
    int vurusGucu;

public:
    Weapon(const std::string& _isim, int _vurusGucu) : isim(_isim), vurusGucu(_vurusGucu) {}

    virtual void Saldir() { // Sanal işlev ekliyoruz
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

int main() {
    // Upcast: Alt sınıf nesnesini üst sınıf tipine dönüştürme
    Gun tabanca("Desert Eagle", 50);
    Weapon& silah1 = tabanca; // Upcast

    // Üst sınıf tipine dönüştürülen nesne, sadece üst sınıfın üyelerine erişebilir
    silah1.Saldir(); // "Desert Eagle ile saldirildi. Vurus gucu: 50"

    // Downcast: Üst sınıf nesnesini alt sınıf tipine dönüştürme (dikkatli kullanılmalıdır)
    Weapon* silah2 = &tabanca; // Upcast

    // Downcast yaparken dinamik_cast kullanmak daha güvenlidir
    Gun* tabancaPtr = dynamic_cast<Gun*>(silah2);

    if (tabancaPtr) {
        tabancaPtr->AtesEt(); // "Tabanca atesleme..."
    } else {
        std::cout << "Downcast işlemi başarısız oldu." << std::endl;
    }

    return 0;
}


int main() {
    // Upcast: Alt sınıf nesnesini üst sınıf tipine dönüştürme
    Gun tabanca("Desert Eagle", 50);
    Weapon& silah1 = tabanca; // Upcast

    // Üst sınıf tipine dönüştürülen nesne, sadece üst sınıfın üyelerine erişebilir
    silah1.Saldir(); // "Desert Eagle ile saldirildi. Vurus gucu: 50"

    // Downcast: Üst sınıf nesnesini alt sınıf tipine dönüştürme (dikkatli kullanılmalıdır)
    Weapon* silah2 = &tabanca; // Upcast

    // Downcast yaparken dinamik_cast kullanmak daha güvenlidir
    Gun* tabancaPtr = dynamic_cast<Gun*>(silah2);

    if (tabancaPtr) {
        tabancaPtr->AtesEt(); // "Tabanca atesleme..."
    } else {
        std::cout << "Downcast işlemi başarısız oldu." << std::endl;
    }

    return 0;
}

