#include<iostream>
using namespace std;


class Rect{
private:
    int a, b;
public:
    Rect(); // конструктор по умолчанию
    Rect(int, int); // конструктор
    Rect(const Rect&); // конструктор копирования
    ~Rect(); // декструктор
    int Square();
    void Outparam();

};

// конструктор по умолчанию
Rect::Rect() {
    a = 1;
    b = 1;
};

// конструктор с параметрами
Rect::Rect(int a, int b) {
    this->a = a;
    this->b = b;
};


// Конструктор копирования
Rect::Rect(const Rect &ob) {
    a = ob.a;
    b = ob.b;
    cout << "Работает конструктор копирования!";
};

int Rect::Square() {
    return a * b;
}

void Rect::Outparam() {
    cout << "П/у со стронами" << a << " и " << b;
};

// Деструктор
Rect::~Rect(){
    cout << "Работает деструктор!";
    cin.get();
}

int main(){
    setlocale(LC_ALL, "rus");
    //system("color F1");
    Rect r1(5, 4);
    Rect r2;
    Rect *ukr2 = &r2;
    r1.Outparam();
    cout << "\nПлощадь = " << r1.Square();
    ukr2->Outparam();
    cout << "\nПлощадь = " << ukr2->Square();

    Rect r3 = r1; // обращение к конструктору копирования
    r3.Outparam();
    cout << "\n Площадь = " << r3.Square();
    cout<<"\n\n";
}


