#include <iostream>
using namespace std;

int main()
{
    // 1. Змінні напередвизначених типів
    unsigned short unsignedNumber;
    int intNumber;
    float floatNumber;
    double doubleNumber;

    // 2. Вказівники відповідних типів
    unsigned short* pUnsignedNumber;
    int* pIntNumber;
    float* pFloatNumber;
    double* pDoubleNumber;

    // 3. Нетипізована вказівна змінна
    void* pVoid;

    // 4. Ініціалізація вказівників адресами змінних
    pUnsignedNumber = &unsignedNumber;
    pIntNumber = &intNumber;
    pFloatNumber = &floatNumber;
    pDoubleNumber = &doubleNumber;

    // 5. Ініціалізація змінних значеннями варіанта №5
    //    за допомогою операції розіменування
    *pUnsignedNumber = 1400;
    *pIntNumber = -386;
    *pFloatNumber = 4.4525f;
    *pDoubleNumber = -7.3e23;

    // Виведення значень змінних
    cout << "Значення змінних:" << endl;
    cout << "unsigned short = " << unsignedNumber << endl;
    cout << "int = " << intNumber << endl;
    cout << "float = " << floatNumber << endl;
    cout << "double = " << doubleNumber << endl;

    // 6. Визначення розміру змінних
    cout << "\nРозмір змінних:" << endl;
    cout << "Розмір unsigned short = "
         << sizeof(unsignedNumber) << " байт" << endl;
    cout << "Розмір int = "
         << sizeof(intNumber) << " байт" << endl;
    cout << "Розмір float = "
         << sizeof(floatNumber) << " байт" << endl;
    cout << "Розмір double = "
         << sizeof(doubleNumber) << " байт" << endl;

    // Розмір вказівників
    cout << "\nРозмір вказівників:" << endl;
    cout << "Розмір вказівника unsigned short = "
         << sizeof(pUnsignedNumber) << " байт" << endl;
    cout << "Розмір вказівника int = "
         << sizeof(pIntNumber) << " байт" << endl;
    cout << "Розмір вказівника float = "
         << sizeof(pFloatNumber) << " байт" << endl;
    cout << "Розмір вказівника double = "
         << sizeof(pDoubleNumber) << " байт" << endl;
    cout << "Розмір нетипізованого вказівника = "
         << sizeof(pVoid) << " байт" << endl;

    // 7. Ініціалізація нетипізованого вказівника
    //    адресою типізованого вказівника
    pVoid = &pIntNumber;

    cout << "\nРобота з нетипізованим вказівником:" << endl;
    cout << "Адреса вказівника int = " << &pIntNumber << endl;
    cout << "Значення нетипізованого вказівника = " << pVoid << endl;

    // 8. Опис посилання
    int& intReference = intNumber;

    cout << "\nРобота з посиланням:" << endl;
    cout << "Значення посилання = " << intReference << endl;
    cout << "Адреса посилання = " << &intReference << endl;

    return 0;
}