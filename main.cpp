#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;

    const int MAX_MOKINIU = 100;
    const int MAX_PAZYMIU = 10;

    string vardai[MAX_MOKINIU];
    int pazymiai[MAX_MOKINIU][MAX_PAZYMIU];
    int pazymiuKiekis[MAX_MOKINIU];
    int mokiniuKiekis = 0;

    do {
        cout << "1. Įvesti mokinį ir jo pažymius." << endl;
        cout << "2. Peržiūrėti visų mokinių pažymius." << endl;
        cout << "3. Peržiūrėti konkretaus mokinio pažymius." << endl;
        cout << "4. Atnaujinti pažymį." << endl;
        cout << "5. Apskaičiuoti mokinio vidurkį." << endl;
        cout << "6. Pašalinti mokinį." << endl;
        cout << "7. Išeiti." << endl;
        cout << "Pasirinkite veiksma: ";

        cin >> choice;

        cout << "Pasirinkote: " << choice << endl;
        
        switch (choice)
        {
        case 1:
            cout << "Koks mokinio vardas? ";
            cin >> vardai[mokiniuKiekis];
            break;
        case 2:
            cout << "2. Peržiūrėti visų mokinių pažymius." << endl;
            break;
        case 3: 
            cout << "3. Peržiūrėti konkretaus mokinio pažymius." << endl;
            break;
        case 4:
            cout << "4. Atnaujinti pažymį." << endl;
            break;
        case 5:
            cout << "5. Apskaičiuoti mokinio vidurkį." << endl;
            break;
        case 6:
            cout << "6. Pašalinti mokinį." << endl;
            break;
        case 7:
            cout << "7. Išeiti." << endl;
            break;
        default:
            cout << "neteisingas pasirinkimas, bandykite dar karta.";
            break;
        }

    }   while(choice != 7);

return 0;
}