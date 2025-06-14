#include <iostream>

using namespace std;

int pohyb[19] = {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
string jmeno_hrac;
string Inventar[10];
string schopnosti[3][4];
string classa;
int input;

int zivoty;
int energie;
int utok;
int mana;
int zlato;

int zivoty_copy;
int energie_copy;
int mana_copy;

void Get_class() {

    cout << "Napis tve jmeno: ";
    getline(cin, jmeno_hrac);

    do {
        cout << "\n\nCim se zabyvas (Class): ";
        cout << "\n\n1 - Carodej\n2 - Bojovnik\n3 - Zlodej\n4 - Bezdomovec";
        cout << "\n\nOdpoved: ";
        cin >> input;

        if (cin.fail()) {

            cin.clear();
            cin.ignore();

            input = 100;

        }

        if (input == 1) {classa = "carodej";}
        if (input == 2) {classa = "bojovnik";}
        if (input == 3) {classa = "zlodej";}
        if (input == 4) {classa = "bezdomovec";}

        switch (input) {

        case 1:
        {
        // Carodej
            zivoty = 80;
            energie = 30;
            utok = 5;
            mana = 60;
            zlato = 70;

            schopnosti[0][0] = "Ohniva strela";
            schopnosti[0][1] = "Pohyb zeme";
            schopnosti[0][2] = "Svetelna sila Slunce";
            schopnosti[0][3] = "Leceni";

            schopnosti[1][0] = "Utok-Magie";
            schopnosti[1][1] = "Utok-Magie";
            schopnosti[1][2] = "Utok-Magie";
            schopnosti[1][3] = "Leceni-Magie";

            schopnosti[2][0] = "6";
            schopnosti[2][1] = "3";
            schopnosti[2][2] = "4";
            schopnosti[2][3] = "10";

            break;
        }
        case 2:
        {
        // Bojovnik
            zivoty = 120;
            energie = 40;
            utok = 2;
            mana = 5;
            zlato = 90;

            schopnosti[0][0] = "Pest";
            schopnosti[0][1] = "Mocny dupnuti";
            schopnosti[0][2] = "Hod kamenem";
            schopnosti[0][3] = "Barbarsky pokrik";

            schopnosti[1][0] = "Utok-Nasili";
            schopnosti[1][1] = "Utok-Nasili";
            schopnosti[1][2] = "Utok-Nasili";
            schopnosti[1][3] = "+Utok-Magie";

            schopnosti[2][0] = "5";
            schopnosti[2][1] = "6";
            schopnosti[2][2] = "3";
            schopnosti[2][3] = "2";

            break;
        }
        case 3:
        {
        // Zlodej
            zivoty = 100;
            energie = 70;
            utok = 2;
            mana = 20;
            zlato = 130;

            schopnosti[0][0] = "Bodnuti dykou";
            schopnosti[0][1] = "Hod dykou";
            schopnosti[0][2] = "granat";
            schopnosti[0][3] = "Kradez utoku";

            schopnosti[1][0] = "Utok-Nasili";
            schopnosti[1][1] = "Utok-Nasili";
            schopnosti[1][2] = "Utok-Magie";
            schopnosti[1][3] = "-Utok-Magie";

            schopnosti[2][0] = "2";
            schopnosti[2][1] = "1";
            schopnosti[2][2] = "5";
            schopnosti[2][3] = "3";

            break;
        }
        case 4:
        {
        // Bezdomovec
            zivoty = 100;
            energie = 60;
            utok = 3;
            mana = 15;
            zlato = 0;

            schopnosti[0][0] = "Seknuti nozem";
            schopnosti[0][1] = "Hod flaskou";
            schopnosti[0][2] = "Kousnuti";
            schopnosti[0][3] = "Zebrani";

            schopnosti[1][0] = "Utok-Nasili";
            schopnosti[1][1] = "Utok-Nasili";
            schopnosti[1][2] = "Utok-Nasili";
            schopnosti[1][3] = "+Zlato-Magie";

            schopnosti[2][0] = "3";
            schopnosti[2][1] = "4";
            schopnosti[2][2] = "3";
            schopnosti[2][3] = "20";

            break;
        }
        default:
        {
            cout << "Zadals to blbe";
        }


        }

    } while (input < 1 || input > 4);


    zivoty_copy = zivoty;
    energie_copy = energie;
    mana_copy = mana;


}
