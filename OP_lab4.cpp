#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    double N_real;
    cout << "Введіть кількість секунд, що минули з початку доби (N): ";
    cin >> N_real;

    // Приведення типу в стилі С
    int N_c = (int)N_real;

    // Приведення типу в стилі С++ (static_cast)
    int N_cpp = static_cast<int>(N_real);

    int secInHour = N_cpp % 3600;      // секунди з початку останньої години
    int minutes = secInHour / 60;      // повні хвилини

    cout << "N (C-style cast)   = " << N_c << endl;
    cout << "N (static_cast)    = " << N_cpp << endl;
    cout << "Повних хвилин з початку останньої години: " << minutes << endl;
    return 0;
}
// Оновлення коду для лабораторної роботи 7
