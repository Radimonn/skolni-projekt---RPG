#include <iostream>
#include <random>
#include <windows.h>

#include "hdr\Global_stuff.h"

using namespace std;


string enemy_schopnost[3][2];
string enemy_jmeno;

int enemy_zivot;
int enemy_utok;
int enemy_mana;
int enemy_energie;
int number_of_enemy;



void Zacit_Bitvu(char enemy, int NumberOfEnemy) {

    number_of_enemy = NumberOfEnemy;

    switch(enemy) {

    case 'G':
    {
//    G = goblin -- les / vetsinou po dvou

        enemy_jmeno = "Skret";
        enemy_zivot = 30;
        enemy_utok = 3;
        enemy_mana = 10;
        enemy_energie = 50;

        enemy_schopnost[0][0] = "Skret hodil ostepem";
        enemy_schopnost[0][1] = "Skret na tebe hodil kamen";
        enemy_schopnost[1][0] = "Utok-Magie";
        enemy_schopnost[1][1] = "Utok-Nasili";
        enemy_schopnost[2][0] = "5";
        enemy_schopnost[2][1] = "2";

        break;
    }

    case 'F':
    {
//    F = falesny bojovnik -- pred hradem / vetsinou po jednom

        enemy_jmeno = "Falesny bojovnik";
        enemy_zivot = 60;
        enemy_utok = 5;
        enemy_mana = 20;
        enemy_energie = 40;

        enemy_schopnost[0][0] = "Falesny bojovnik svihnul svym obrovskym mecem";
        enemy_schopnost[0][1] = "Falesny bojovnik najde kamen a hodi ho po tobe";
        enemy_schopnost[1][0] = "Utok-Nasili";
        enemy_schopnost[1][1] = "Utok-Nasili";
        enemy_schopnost[2][0] = "7";
        enemy_schopnost[2][1] = "1";

        break;
    }

    case 'Z':
    {
//    Z = zly obcan vesnice -- pred hradem / vetsinou po jednom

        enemy_jmeno = "Zly obcan vesnice";
        enemy_zivot = 50;
        enemy_utok = 4;
        enemy_mana = 10;
        enemy_energie = 50;

        enemy_schopnost[0][0] = "Zly obcan vesnice se rozhodne hodit svoje naradi tvym smerem";
        enemy_schopnost[0][1] = "Zly obcan vesnice te sekne srpem";
        enemy_schopnost[1][0] = "Utok-Magie";
        enemy_schopnost[1][1] = "Utok-Nasili";
        enemy_schopnost[2][0] = "5";
        enemy_schopnost[2][1] = "3";

        break;
    }

    case 'P':
    {
//    P = prerostly brouk -- za hradem / vetsinou po trech

        enemy_jmeno = "Prerostly brouk";
        enemy_zivot = 20;
        enemy_utok = 2;
        enemy_mana = 30;
        enemy_energie = 60;

        enemy_schopnost[0][0] = "Brouk te kousne";
        enemy_schopnost[0][1] = "Brouk te bodne spicatymi nozickami";
        enemy_schopnost[1][0] = "Utok-Nasili";
        enemy_schopnost[1][1] = "Utok-Nasili";
        enemy_schopnost[2][0] = "3";
        enemy_schopnost[2][1] = "4";

        break;
    }

    case 'N':
    {
//    N = nemrtvy valecnik -- za hradem / vetsinou po jednom

        enemy_jmeno = "Nemrtvy valecnik";
        enemy_zivot = 60;
        enemy_utok = 4;
        enemy_mana = 50;
        enemy_energie = 30;

        enemy_schopnost[0][0] = "Nemrtvy valecnik hodi po tobe svoji ruku?";
        enemy_schopnost[0][1] = "Nemrtvy valecnik svihne jeho mecem";
        enemy_schopnost[1][0] = "Utok-VsechnaMagie";
        enemy_schopnost[1][1] = "Utok-Nasili";
        enemy_schopnost[2][0] = "6";
        enemy_schopnost[2][1] = "5";

        break;
    }

    case 'O':
    {
//    O = obcan vesnice bez duse -- divna daleka vesnice / vetsinou po jednom

        enemy_jmeno = "Obcan vesnice bez duse";
        enemy_zivot = 50;
        enemy_utok = 3;
        enemy_mana = 70;
        enemy_energie = 40;

        enemy_schopnost[0][0] = "Podezrely obcan te silne chytne, jako kdyby ti chtel vzit dusi";
        enemy_schopnost[0][1] = "Podezrely obcan te prasti absurdni silou";
        enemy_schopnost[1][0] = "-Energie-Magie";
        enemy_schopnost[1][1] = "Utok-Nasili";
        enemy_schopnost[2][0] = "10";
        enemy_schopnost[2][1] = "7";

        break;
    }

    case 'V':
    {
//    V = Volna duse -- divna daleka vesnice / vetsinou po dvou

        enemy_jmeno = "Volna duse";
        enemy_zivot = 30;
        enemy_utok = 4;
        enemy_mana = 50;
        enemy_energie = 50;

        enemy_schopnost[0][0] = "Volna duse leti tvym smerem a narazi do tebe";
        enemy_schopnost[0][1] = "Volna duse si zvysi utok";
        enemy_schopnost[1][0] = "Utok-Nasili";
        enemy_schopnost[1][1] = "+Utok-Nasili";
        enemy_schopnost[2][0] = "4";
        enemy_schopnost[2][1] = "2";

        break;
    }



    }

}

void enemy_attack() {

    int j;

    int mana_formula_enemy = stoi(enemy_schopnost[2][j]) * 2 - stoi(enemy_schopnost[2][j]) / 3;

    int energie_formula_enemy = stoi(enemy_schopnost[2][j]) * 2 - stoi(enemy_schopnost[2][j]) / 2;


    int random = rand() % 2;

    if (rand() % 2 == 1) {

        if (random == 0 && enemy_energie >= energie_formula_enemy && enemy_schopnost[1][0] == "Utok-Nasili") {

            j = 0;
            cout << "|\n|  " << enemy_schopnost[0][0] << "\n|\n";

            enemy_energie -= energie_formula_enemy;

            zivoty -= stoi(enemy_schopnost[2][0]);

        } else if (random == 1 && enemy_energie >= energie_formula_enemy && enemy_schopnost[1][1] == "Utok-Nasili") {

            j = 1;
            cout << "|\n|  " << enemy_schopnost[0][1] << "\n|\n";

            enemy_energie -= energie_formula_enemy;

            zivoty -= stoi(enemy_schopnost[2][1]);

        } else if (random == 0 && enemy_mana >= mana_formula_enemy && enemy_schopnost[1][0] == "Utok-Magie") {

            j = 0;
            cout << "|\n|  " << enemy_schopnost[0][0] << "\n|\n";

            enemy_mana -= mana_formula_enemy;

            zivoty -= stoi(enemy_schopnost[2][0]);

        } else if (random == 1 && enemy_mana >= mana_formula_enemy && enemy_schopnost[1][1] == "Utok-Magie") {

            j = 1;
            cout << "|\n|  " << enemy_schopnost[0][1] << "\n|\n";

            enemy_mana -= mana_formula_enemy;

            zivoty -= stoi(enemy_schopnost[2][1]);

        } else if (random == 1 && enemy_mana >= mana_formula_enemy && enemy_schopnost[1][1] == "+Utok-Magie") {

            j = 1;
            cout << "|\n|  " << enemy_schopnost[0][1] << "\n|\n";

            enemy_mana -= mana_formula_enemy;

            enemy_utok += stoi(enemy_schopnost[2][1]);

        } else if (random == 0 && enemy_mana >= mana_formula_enemy && enemy_schopnost[1][0] == "Utok-VsechnaMagie") {

            j = 0;
            cout << "|\n|  " << enemy_schopnost[0][0] << "\n|\n";

            enemy_mana = 0;

            zivoty -= stoi(enemy_schopnost[2][0]);

        } else if (random == 0 && enemy_mana >= mana_formula_enemy && enemy_schopnost[1][0] == "-Energie-Magie") {

            j = 0;
            cout << "|\n|  " << enemy_schopnost[0][0] << "\n|\n";

            enemy_mana = mana_formula_enemy;

            energie -= stoi(enemy_schopnost[2][0]);

        } else {
            cout << "|\n| " << enemy_jmeno << " se k tobe priblizi a zautoci\n|\n";

            zivoty -= rand() % enemy_utok + 1;
        }
    } else {

        cout << "|\n| " << enemy_jmeno << " se k tobe priblizi a zautoci\n|\n";

        zivoty -= rand() % enemy_utok + 1;
    }

    cout << "-------------------------------------------------------------------------------------------------------";
    Sleep(2000);

}

void draw_battle(int zivot, int energie, int mana, string jmeno) {

    system("cls");

    if (mana < 0) {mana = 0;}
    if (energie < 0) {energie = 0;}
    if (zivot < 0) {zivot = 0;}

    cout << "\n   ______________________________-----------___________________________________________________________   \n";
    cout << "|--______________________________   BITVA   ___________________________________________________________--|\n";
    cout << "                                 -----------\n";

    cout << "\n\n\n\n\n\n\n\n\n\n\n";
    cout << " ___________________ \n";
    cout << "  " << jmeno << "\n";
    cout << "|   zivot: " << zivot << "       |\t\t\t\t\t\t\t\t   ____________________\n";
    cout << "|   mana : " << mana << "        |\t\t\t\t\t\t\t\t   " << enemy_jmeno << "|  " << enemy_zivot << "  |\n";
    cout << "|   energie: " << energie << "      |\t\t\t\t\t\t\t\t   --------------------\n---------------------------__/";
    cout << "\n\n_______________________________________________________________________________________________________\n";

}

void player_attack(string (schopnosti)[3][4], string jmeno) {

    int whatDo;
    int whatPower;


    cout << "|     Co " << jmeno << " udela?   (Cislo prosim)\n|\n";
    cout << "|    1 -- [ UTOK ]          2 -- [ SCHOPNOST ]\n";
    cout << "|\n";
    do {
        cout << "|   > ";
        cin >> whatDo;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "|\n";
            whatDo = 0;
            cout << "| Asi jsi se preklepl\n";

        } else if (whatDo > 2 || whatDo < 1) {

            cout << "|\n";
            whatDo = 0;
            cout << "| Asi jsi se preklepl\n";


        }

    } while(whatDo < 1 || whatDo > 2);

    if (whatDo == 2 ) {

        cout << "|\n| Kterou schopnost pozijes? (Cislo prosim)\n";
        cout << "|\n|   1 -- " << schopnosti[0][0] << "\n|   2 -- " << schopnosti[0][1] << "\n|   3 -- " << schopnosti[0][2] << "\n|   4 -- " << schopnosti[0][3] << endl;

        do {

            cout << "|\n|    > ";
            cin >> whatPower;

            if (cin.fail() || whatPower < 1 || whatPower > 4) {
                cin.clear();
                cin.ignore(100, '\n');

                whatPower = 0;
                cout << "|\n| Asi jsi se preklepl\n";

            }

        } while (whatPower < 1 || whatPower > 4);

        int i = whatPower - 1;

        cout << "|\n|  Pouzijes jednu ze svych schopnosti:  " << schopnosti[0][i] << endl;

        int mana_formula = stoi(schopnosti[2][i]) * 2 - stoi(schopnosti[2][i]) / 3;

        int energie_formula = stoi(schopnosti[2][i]) * 2 - stoi(schopnosti[2][i]) / 2;

        if (schopnosti[1][i] == "Utok-Magie" && mana >= mana_formula) {

            mana -= mana_formula;

            enemy_zivot -= stoi(schopnosti[2][i]);

        } else if (schopnosti[1][i] == "Utok-Nasili" && energie >= energie_formula) {


            energie -= energie_formula;

            enemy_zivot -= stoi(schopnosti[2][i]);

        } else if (schopnosti[1][i] == "Leceni-Magie" && mana >= mana_formula && zivoty_copy >= zivoty + stoi(schopnosti[2][i])) {

            if(zivoty < zivoty_copy) {
                zivoty += stoi(schopnosti[2][i]);
            }
            mana -= mana_formula;


        } else if (schopnosti[1][i] == "+Utok-Magie" && mana >= mana_formula) {

            utok += stoi(schopnosti[2][i]);

            mana -= mana_formula;


        } else if (schopnosti[1][i] == "-Utok-Magie" && mana >= mana_formula) {

            utok += stoi(schopnosti[2][i]);

            enemy_utok -= stoi(schopnosti[2][i]);

        } else if (schopnosti[1][i] == "+Zlato-Magie"&& mana >= mana_formula) {

            zlato += stoi(schopnosti[2][i]);

            mana -= mana_formula;

        } else { cout << "\n|\n|  Ale nemas dost many nebo energie.\n"; }

    }

    else {

        cout << "|\n|  Priblizis se a zautocis svou zbrani\n";

        enemy_zivot -= rand() % utok + 1;



    }

    cout << "--------------------------------------------------------------------------------------------------------";
    Sleep(2000);

}

int get_enemy_state() {

    if (enemy_zivot <= 0) {

        return 69;

    } else if(zivoty <= 0) {

        return 420;

    }

    return 0;
}


