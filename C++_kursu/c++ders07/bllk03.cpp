#include <iostream>
#include <memory> // shared_ptr için gerekli başlık

class Silah {
public:
    int d{};
    Silah() {
        std::cout << "Silah oluşturuldu" << std::endl;
    }
    
    ~Silah() {
        std::cout << "Silah yok edildi" << std::endl;
    }
};

int main() {
    // std::shared_ptr kullanarak Silah örneği oluşturmak
    std::shared_ptr<Silah> silahPtr = std::make_shared<Silah>();

    // std::shared_ptr, ömrü otomatik olarak takip eder
    // Bu nedenle silahPtr, işi bitince Silah nesnesini bellekten otomatik olarak temizler

    // Başka işlemler yapabilirsiniz...

    // silahPtr, işi bittiğinde nesneyi otomatik olarak temizler
    std::cout << silahPtr ->d;
    std::cout << silahPtr.get();
    std::cout << silahPtr.use_count();
}

