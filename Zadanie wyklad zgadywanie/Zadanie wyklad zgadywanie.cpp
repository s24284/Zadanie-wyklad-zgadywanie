// Zadanie wyklad zgadywanie.cpp 
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{ 
    
    srand(time(NULL));
    int losowana = 1 + (std::rand() % 100);
    int zgadywana;   

  
    do
    {
        std::cout << "Wylosowalem liczbe w przedziale 1-100. Zgadnij, jaka to liczba:\n";
        std::cin >> zgadywana;

        if (zgadywana < 1 || zgadywana > 100)
        {
            std::cout << "Podales liczbe spoza zakresu 1-100. Sprobuj jeszcze raz:\n";
            
        }

        else if (zgadywana < losowana)
        {
            std::cout << "Podales liczbe mniejsza niz ta, ktora wylosowalem. Sprobuj ponownie:\n";
        }

        else if (zgadywana > losowana)
        {
            std::cout << "Podales liczbe wieksza niz ta, ktora wylosowalem. Sprobuj ponownie:\n";
        }
    }

    while (zgadywana != losowana);

        std::cout << "Zgadles, brawo! Wylosowana przeze mnie liczba to:" << losowana << "!\n";

    return 0;

    
    
   
}
