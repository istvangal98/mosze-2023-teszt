#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[N_ELEMENTS]; // NELEMENTS helyett N_ELEMENTS kell hogy legyen
    std::cout << "1-100 ertekek duplazasa" << std::endl; // Hiányzott a << std::endl, és a kettőspont is hibás
    for (int i = 0; i < N_ELEMENTS; i++) // Hiányzott a < N_ELEMENTS, i++ hibás volt
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) // A feltételnek igaznak kell lennie, i++ hibás volt
    {
        std::cout << "Ertek: " << b[i] << std::endl; // A hibás szövegezést és a hiányzó << std::endl-t hozzáadtam
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // A változónak inicializálva kell lennie
    for (int i = 0; i < N_ELEMENTS; i++) // A vessző helyett pontosvesszőt kell használni és i++ hibás volt
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}