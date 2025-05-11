#include <iostream>
#include <ctime>
#include <windows.h>

#include "hdr\Global_stuff.h"



int main() {

    Get_class();

    Zacit_Bitvu('G', 1);
    system("cls");

    while(true) {


        draw_battle(zivoty , energie, mana, jmeno_hrac);

        player_attack(schopnosti, jmeno_hrac);

        if (get_enemy_state() == 69) {

            system("cls");
            cout << "\t\t\t_____________________________________________________\n\t\t\t|              VYHRAL JSI TUTO BITVU               |\n\t\t\t-----------------------------------------------------";
            Sleep(2000);
            break;

        } else if (get_enemy_state() == 420) {

            system("cls");
            cout << "\t\t\t_____________________________________________________\n\t\t\t|             PROHRAL JSI TUTO BITVU               |\n\t\t\t-----------------------------------------------------";
            Sleep(2000);
            break;
        }

        system("cls");

        draw_battle(zivoty , energie, mana, jmeno_hrac);

        enemy_attack();

        if (get_enemy_state() == 69) {

            system("cls");
            cout << "\t\t\t_____________________________________________________\n\t\t\t|              VYHRAL JSI TUTO BITVU               |\n\t\t\t-----------------------------------------------------";
            Sleep(2000);
            break;

        } else if (get_enemy_state() == 420) {

            system("cls");
            cout << "\t\t\t_____________________________________________________\n\t\t\t|             PROHRAL JSI TUTO BITVU               |\n\t\t\t-----------------------------------------------------";
            Sleep(2000);
            break;
        }

        system("cls");


    }



}
