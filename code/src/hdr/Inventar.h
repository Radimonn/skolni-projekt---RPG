#ifndef GUARD
#define GUARD

#include <iostream>


using namespace std;

void pridejPredmet(string inventar[], int &pocet) {
    cout << "-----------------------------------------";
    int item_input;

    cout << "\n\n\tCo chces pridat: ";
    cout << "\n\n\t  1 - lekarna / +10 HP";
    cout << "\n\t  2 - elixir / +5 utok";
    cout << "\n\t  3 - otrava / -10 HP";
    cout << "\n\t  4 - tajemny svitek / nahodny efekt";
    cout << "\n\n\tVyber (1-4): ";

    if (pocet < 10) {
        cin >> item_input;

        switch (item_input) {
            case 1:
                inventar[pocet] = "lekarna";
                pocet++;

                break;
            case 2:
                inventar[pocet] = "elixir";
                pocet++;

                break;
            case 3:
                inventar[pocet] = "otrava";
                pocet++;

                break;
            case 4:
                inventar[pocet] = "tajemny svitek";
                pocet++;

                break;
            default:
                cout << "\nTo neni platna volba! Zadejte cislo 1-4." << endl;
        }
    } else {
        cout << "\n\n   Nemuzes nic pridat, inventar je plny!" << endl;
    }

    cout << "\n-----------------------------------------";
}


void odeberPredmet(string inventar[], int &pocet) {
    if (pocet == 0) {
        cout << "\nInventar je prazdny, nemuzes nic odebrat" << endl;
    } else {
        cout << "\nZadej cislo predmetu, ktery chces odebrat (1-" << pocet << "): ";
        int item_input;
        cin >> item_input;

        if (item_input > 0 && item_input <= pocet) {
            for (int i = item_input - 1; i < pocet - 1; i++) {
                inventar[i] = inventar[i + 1];
            }
            pocet--;
            cout << "\nPredmet odebran." << endl;
        } else {
            cout << "\nNeplatna volba!" << endl;
        }
    }
}

void pouzijPredmet(string inventar[], int &pocet, int &zivoty, int &utok) {
    if (pocet == 0) {
        cout << "\nInventar je prazdny, nemuzes nic pouzit!" << endl;
    } else {
        cout << "\nZadej cislo predmetu, ktery chces pouzit (1-" << pocet << "): ";
        int item_input;
        cin >> item_input;

        if (item_input > 0 && item_input <= pocet) {
            if (inventar[item_input - 1] == "lekarna") {
                zivoty += 10;
                cout << "\nPouzil jsi 'lekarna'. Ziskal jsi 10 HP." << endl;
            } else if (inventar[item_input - 1] == "elixir") {
                utok += 5;
                cout << "\nPouzil jsi 'elixir'. Ziskal jsi 5 utoku." << endl;
            } else if (inventar[item_input - 1] == "otrava") {
                zivoty -= 10;
                cout << "\nPouzil jsi 'otrava'. Ztratil jsi 10 HP." << endl;
            } else if (inventar[item_input - 1] == "tajemny svitek") {
                int random = rand() % 3;
                if (random == 0) {
                    zivoty += 10;
                    cout << "\nPouzil jsi 'tajemny svitek'. Ziskal jsi 10 HP." << endl;
                } else if (random == 1) {
                    zivoty -= 10;
                    cout << "\nPouzil jsi 'tajemny svitek'. Ztratil jsi 10 HP." << endl;
                } else {
                    utok += 5;
                    cout << "\nPouzil jsi 'tajemny svitek'. Ziskal jsi 5 utoku." << endl;
                }
            }
            for (int i = item_input - 1; i < pocet - 1; i++) {
                inventar[i] = inventar[i + 1];
            }
            pocet--;
        } else {
            cout << "\nNeplatna volba!" << endl;
        }
    }
}

void vypisInventar(string inventar[], int pocet) {
    cout << "-----------------------------------------";
    if (pocet == 0) {
        cout << "\nInventar je prazdny." << endl;
    } else {
        for (int i = 0; i < pocet; i++) {
            cout << "\n" << i + 1 << ". " << inventar[i];
        }
    }
    cout << "\n-----------------------------------------";
}

void start_inventar(int zivoty, int utok, string inventar[10]) {
    int vyber;
    int obsazene_mista = 0;

    while (vyber != 5) {
        cout << "\nInventar:\t\t\tZivoty - " << zivoty << "   Utok - " << utok;
        cout << "\n\n\t\t(U vyberu pis cislo)\n\n  1 - Pridat Predmet\n";
        cout << "  2 - Odebrat Predmet\n";
        cout << "  3 - Pouzit Predmet\n";
        cout << "  4 - Zobrazit inventar\n";
        cout << "  5 - Ukoncit\n";

        cout << "\n\nVyber:  ";
        cin >> vyber;

        switch (vyber) {
            case 1:
                pridejPredmet(inventar, obsazene_mista);
                break;
            case 2:
                odeberPredmet(inventar, obsazene_mista);
                break;
            case 3:
                pouzijPredmet(inventar, obsazene_mista, zivoty, utok);
                break;
            case 4:
                vypisInventar(inventar, obsazene_mista);
                break;
            case 5:
                break;
            default:
                cout << "\n\t------------------\n\t|  Spatny Input  |\n\t------------------\n";
        }
    }
}


#endif // GUARD
