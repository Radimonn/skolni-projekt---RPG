#ifndef GLOBAL
#define GLOBAL
#include <iostream>

// Funkce
void Get_class();
void Zacit_Bitvu(char enemy, int NumberOfEnemy);
void draw_battle(int zivot, int energie, int mana, std::string jmeno);
void player_attack(std::string (schopnosti)[3][4], std::string jmeno);
int get_enemy_state();
void enemy_attack();
void Cutalot_attack(bool lichy, int kola);

void Dopredu(int (&pohyb)[]);
void Dozadu(int (&pohyb)[]);
void Vesnice1();
void Vesnice2();
void Vesnice3();
void pouzijPredmet(int &pocet, int &zivoty, int &utok);
void vypisInventar(int pocet);
void start_inventar(int &zlato, int &mana, int &energie, int &zivoty, int &utok);

bool les_check();
bool predhrad_check();
bool hrad_check();
bool kral_check();
bool skala_check();
bool hrbitov_check();
bool predchram_check();
bool chram_check();



// Promenny
extern std::string jmeno_hrac;
extern std::string Inventar[10];
extern std::string schopnosti[3][4];
extern std::string classa;

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
extern int obsazene_mista;
extern int place_index;



#endif // GLOBAL
