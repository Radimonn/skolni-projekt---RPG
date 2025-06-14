#include <iostream>
#include <windows.h>

#include "hdr/Global_stuff.h"

using namespace std;



void pouzijPredmet(int &pocet, int &zivoty, int &utok) {
    if (pocet == 0) {
        cout << "\nInventar je prazdny, nemuzes nic pouzit!" << endl;
    } else {
        cout << "\nZadej cislo predmetu, ktery chces pouzit (1-" << pocet << "): ";
        int item_input;
        cin >> item_input;

        if (item_input > 0 && item_input <= pocet) {
            if (Inventar[item_input - 1] == "lekarna") {
                zivoty += 50;
                if (zivoty >= zivoty_copy - 9) {
                    zivoty -= 50;
                    cout << "\nJses moc zdravej tak vic nepotrebujes.\n\n";

                } else {
                    cout << "\nPouzil jsi 'lekarna'. Ziskal jsi 50 HP.\n\n" << endl;
                }

                for (int i = item_input - 1; i < 10; i++) {

                    Inventar[i] = Inventar[i + 1];

                }

                Inventar[9] = "";


            } else if (Inventar[item_input - 1] == "elixir") {
                utok += 5;
                cout << "\nPouzil jsi 'elixir'. Citis se silnejsi." << endl;

                for (int i = item_input - 1; i < 10; i++) {

                    Inventar[i] = Inventar[i + 1];

                }

                Inventar[9] = "";

            } else if (Inventar[item_input - 1] == "tajemny svitek") {
                int random = rand() % 3;
                if (random == 0 && zivoty == zivoty_copy) {
                    zivoty += 10;
                    cout << "\nPouzil jsi 'tajemny svitek'. Ziskal jsi 10 HP." << endl;
                } else if (random == 1) {
                    zivoty -= 10;
                    cout << "\nPouzil jsi 'tajemny svitek'. Ztratil jsi 10 HP." << endl;
                    if (zivoty < 0) {zivoty = 0;}
                } else {
                    utok += 3;
                    cout << "\nPouzil jsi 'tajemny svitek'. Citis se silnejsi." << endl;
                }

                for (int i = item_input - 1; i < 10; i++) {

                    Inventar[i] = Inventar[i + 1];

                }

                Inventar[9] = "";

            }
            pocet--;
        } else {
            cout << "\nNeplatna volba!" << endl;
        }
    }
}

void vypisInventar(int pocet) {
    cout << "-----------------------------------------";
    if (pocet == 0) {
        cout << "\nInventar je prazdny." << endl;
    } else {
        for (int i = 0; i < 10; i++) {
            cout << "\n" << i + 1 << ". " << Inventar[i];
        }
    }
    cout << "\n-----------------------------------------\n\n";
}

void start_inventar(int &zlato, int &mana, int &energie, int &zivoty, int &utok) {
    int vyber;
    int obsazene_mista = 0;

    while (Inventar[obsazene_mista].empty() == 0) {
        obsazene_mista++;
        if (Inventar[9].empty() == 0) {

            obsazene_mista = 10;
            break;
        }
    }



    while (vyber != 3) {

        cout << "\n\n   Zivoty - " << zivoty << "        Mana - " << mana << "      Energie - " << energie << "     Zlato - " << zlato << "\n\n\n";

        cout << "\t\t1 - Pouzit Predmet\n";
        cout << "\t\t2 - Zobrazit inventar\n";
        cout << "\t\t3 - Ukoncit\n";

        cout << "\n\nVyber:  ";
        cin >> vyber;

        switch (vyber) {
            case 1:
                pouzijPredmet(obsazene_mista, zivoty, utok);
                Sleep(3000);
                break;
            case 2:
                vypisInventar(obsazene_mista);
                Sleep(3000);
                break;
            case 3:
                break;
            default:
                cout << "\n\t------------------\n\t|  Spatny Input  |\n\t------------------\n";
                Sleep(3000);
        }


    }
}
