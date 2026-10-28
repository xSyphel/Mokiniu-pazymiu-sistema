#include <iostream>

using namespace std;

int main() {
    int choice;

    cin >> choice;

    do {
        switch (choice)
        {
        case 1:
            cout << "1. Įvesti mokinį ir jo pažymius." << endl;
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
            continue;
        }

    }   while(choice != 7);

return 0;
}