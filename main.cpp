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
        cout << "1. Ivesti mokini ir jo pazymius." << endl;
        cout << "2. Perziureti visu mokiniu pazymius." << endl;
        cout << "3. Perziureti konkretaus mokinio pazymius." << endl;
        cout << "4. Atnaujinti pazymi." << endl;
        cout << "5. Apskaiciuoti mokinio vidurki." << endl;
        cout << "6. Pasalinti mokini." << endl;
        cout << "7. Iseiti." << endl;
        cout << "Pasirinkite veiksma: " << endl;

        cin >> choice;

        cout << "Pasirinkote: " << choice << endl;
        
        switch (choice)
        {
        case 1: {
            if (mokiniuKiekis >= MAX_MOKINIU) {
                cout << "Pasiektas mokinių limitas (" << MAX_MOKINIU << ")." << endl;
                break;
            }
            cout << "Koks mokinio vardas? ";
            cin.ignore();
            getline(cin, vardai[mokiniuKiekis]);
            
            while (vardai[mokiniuKiekis].empty()) {
                cout << "Vardas negali buti tuscias. Iveskite is naujo: ";
                getline(cin, vardai[mokiniuKiekis]);
            }
            
            int n;
            cout << "Kiek pazymiu turi mokinys? ";
            cin >> n;
            
            while (n < 0 || n > MAX_PAZYMIU) {
                cout << "Pažymių kiekis turi būti nuo 0 iki " << MAX_PAZYMIU << ". Įveskite iš naujo: ";
                cin >> n;
            }

            for (int j = 0; j < n; j++) {
                cout << "Iveskite " << j + 1 << " Pazymi: ";
                cin >> pazymiai[mokiniuKiekis][j]; 
                while (pazymiai[mokiniuKiekis][j] < 1 || pazymiai[mokiniuKiekis][j] > 10) {
                    cout << "Pazymys turi buti nuo 1 iki 10. iveskite is naujo: ";
                    cin >> pazymiai[mokiniuKiekis][j];
                };
            }

            cout << "Mokinys \"" << vardai[mokiniuKiekis] << "\" pridetas su " << n << " pazymiais." << endl;
            pazymiuKiekis[mokiniuKiekis] = n;
            mokiniuKiekis++;
            break;
            }
        case 2:
            if (mokiniuKiekis == 0) {
                cout << "Sąrašas tuščias." << endl;
                break;
            }

            for (int i = 0; i < mokiniuKiekis; i++) {
                cout << i + 1 << ". " << vardai[i] << ": ";

                for (int j = 0; j < pazymiuKiekis[i]; j++) {
                    cout << pazymiai[i][j] << " ";
                }

                cout << endl;
            }
            break;
        case 3: {
            if (mokiniuKiekis == 0) {
            cout << "Sąrašas tuščias." << endl;
            break;
            }

            int nr;
            cout << "Įveskite mokinio numerį (1-" << mokiniuKiekis << "): ";
            cin >> nr;

            while (nr < 1 || nr > mokiniuKiekis) {
                cout << "Neteisingas mokinio numeris. Įveskite skaičių nuo 1 iki " << mokiniuKiekis << ": ";
                cin >> nr;
            }

            int i = nr - 1;

            cout << vardai[i] << ": ";
            if (pazymiuKiekis[i] == 0) {
                cout << "pažymių nėra.";
            }
            for (int j = 0; j < pazymiuKiekis[i]; j++) {
                cout << pazymiai[i][j] << " ";
            }
            cout << endl;
            break;
            }
        case 4:{
            if (mokiniuKiekis == 0) {
                cout << "Sarasas tuscias." << endl;
                break;
            }

            int nr;
            cout << "Iveskite mokinio numeri (1-" << mokiniuKiekis << "): ";
            cin >> nr;

            while (nr < 1 || nr > mokiniuKiekis) {
                cout << "Neteisingas mokinio numeris. Iveskite skaiciu nuo 1 iki " << mokiniuKiekis << ": ";
                cin >> nr;
            }

            int i = nr - 1;

            if (pazymiuKiekis[i] == 0) {
                cout << "Mokinys " << vardai[i] << " pazymiu neturi." << endl;
                break;
            }

            int pnr;
            cout << "Iveskite pazymio numeri (1-" << pazymiuKiekis[i] << "): ";
            cin >> pnr;

            while (pnr < 1 || pnr > pazymiuKiekis[i]) {
                cout << "Neteisingas pazymio numeris. Iveskite skaiciu nuo 1 iki " << pazymiuKiekis[i] << ": ";
                cin >> pnr;
            }
            
            int j = pnr - 1;

            int naujas;
            cout << "Dabartinis pazymys: " << pazymiai[i][j] << ". Iveskite nauja: ";
            cin >> naujas;

            while (naujas < 1 | naujas > 10) {
                cout << "Pazymys turi buti nuo 1 iki 10. Iveskite is naujo: ";
                cin >> naujas;
            }

            pazymiai[i][j] = naujas;
            cout << "Pazymys atnaujintas." << endl;
            break;
        }
        case 5:
            cout << "5. Apskaičiuoti mokinio vidurkį." << endl;
            break;
        case 6: {
            if (mokiniuKiekis == 0) {
                cout << "Sąrašas tuščias." << endl;
                break;
            }
            
            int nr;
            cout << "Iveskite salinamo mokinio numeri (1-" << mokiniuKiekis << "): ";
            cin >> nr;

            cout << "Neteisingas mokinio numeris. Iveskite skaiciu nuo 1 iki " << mokiniuKiekis << ": ";
            while (nr < 1 || nr > mokiniuKiekis) {
                cin >> nr;
            }

            int i = - 1;
            string pasalintas = vardai[i];

            for (int k = i; k < mokiniuKiekis - 1; k++) {
                vardai[k] = vardai [k + 1];
                pazymiuKiekis[k] = pazymiuKiekis[k + 1];

                for (int j = 0; j < pazymiuKiekis[k]; j++) {
                    pazymiai[k][j] = pazymiai[k + 1][j];
                }
            }

            mokiniuKiekis--;

            cout << "Mokinys \"" << pasalintas << "\" pasalintas." << endl;
            break;
        }
        case 7:
            cout << "Iseiti" << endl;
            break;
        default:
            cout << "neteisingas pasirinkimas, bandykite dar karta." << endl;
            break;
        }

    }   while(choice != 7);

return 0;
}