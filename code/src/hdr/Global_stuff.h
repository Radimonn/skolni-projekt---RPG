#ifndef GLOBAL
#define GLOBAL
#include <iostream>

using namespace std;

// Funkce
void Get_class();
void Zacit_Bitvu(char enemy, int NumberOfEnemy);
void draw_battle(int zivot, int energie, int mana, string jmeno);
void player_attack(string (schopnosti)[3][4], string jmeno);
int get_enemy_state();
void enemy_attack();
void Dopredu(int pohyb[]);
void Dozadu(int pohyb[]);

// Promenny
extern string jmeno_hrac;
extern string inventar[10];
extern string schopnosti[3][4];
extern string classa;

extern int input;
extern int zivoty;
extern int energie;
extern int utok;
extern int mana;
extern int zlato;

extern int zivoty_copy;
extern int energie_copy;
extern int mana_copy;
extern int pohyb[19];



#endif // GLOBAL
