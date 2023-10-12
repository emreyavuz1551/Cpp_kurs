#include <iostream>
#include <string>

// Soyut Sınıf: Shape
class Shape {
public:
    // Soyut metod (pure virtual method)
    virtual void Draw() = 0;

    // Diğer ortak işlevler burada tanımlanabilir
};

// Alt Sınıf: Circle
class Circle : public Shape {
public:
    void Draw() override {
        // Circle çizme işlemi burada gerçekleştirilir
        std::cout << "Daire çizildi." << std::endl;
    }
};

// Alt Sınıf: Rectangle
class Rectangle : public Shape {
public:
    void Draw() override {
        // Rectangle çizme işlemi burada gerçekleştirilir
        std::cout << "Dikdörtgen çizildi." << std::endl;
    }
};

// Soyutlama ve Polimorfizm Örneği
void DisplayShape(Shape* shape) {
    shape->Draw();
}

int main() {
    Circle circle;
    Rectangle rectangle;

    // DisplayShape fonksiyonu, soyut bir sınıf olan "Shape" türünden işaretçi alır.
    // Dolayısıyla hem "Circle" hem de "Rectangle" sınıfından türetilen nesneleri kabul eder.
    
    // Polimorfik çağrılar:
    DisplayShape(&circle);    // "Daire çizildi." çıktısı görüntülenir
    DisplayShape(&rectangle); // "Dikdörtgen çizildi." çıktısı görüntülenir

    return 0;
}
