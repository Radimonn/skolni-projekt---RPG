#include "hdr/Global_stuff.h"

int mov_index = 0;
int place_index = 0;



void Dopredu(int (&pohyb)[]) {

    while(pohyb[mov_index] != 1) {

        mov_index++;

    }

    pohyb[mov_index] = 0;
    pohyb[mov_index + 1] = 1;

    mov_index = 0;

}


void Dozadu(int (&pohyb)[]) {

    while(pohyb[mov_index] != 1) {

        mov_index++;

    }

    pohyb[mov_index] = 0;
    pohyb[mov_index - 1] = 1;

    mov_index = 0;

}

bool les_check() {

    while(pohyb[place_index] != 1) {

        place_index++;

    }

    if (place_index < 3) {
        place_index = 0;
        return true;
    } else {

        place_index = 0;
        return false;
    }


}

bool predhrad_check() {

    while(pohyb[place_index] != 1) {

        place_index++;

    }

    if (place_index > 3 && place_index < 7) {
        place_index = 0;
        return true;
    } else {

        place_index = 0;
        return false;
    }


}

bool hrad_check() {

    while(pohyb[place_index] != 1) {

        place_index++;

    }

    if (place_index == 7) {
        place_index = 0;
        return true;
    } else {

        place_index = 0;
        return false;
    }

}

bool kral_check() {

    while(pohyb[place_index] != 1) {

        place_index++;

    }

    if (place_index == 9) {
        place_index = 0;
        return true;
    } else {

        place_index = 0;
        return false;
    }

}

bool skala_check() {

    while(pohyb[place_index] != 1) {

        place_index++;

    }

    if (place_index > 9 && place_index < 13) {
        place_index = 0;
        return true;
    } else {

        place_index = 0;
        return false;
    }

}

bool hrbitov_check() {

    while(pohyb[place_index] != 1) {

        place_index++;

    }

    if (place_index > 13 && place_index < 17) {
        place_index = 0;
        return true;
    } else {

        place_index = 0;
        return false;
    }

}

bool predchram_check() {

    while(pohyb[place_index] != 1) {

        place_index++;

    }

    if (place_index == 17) {
        place_index = 0;
        return true;
    } else {

        place_index = 0;
        return false;
    }

}

bool chram_check() {

    while(pohyb[place_index] != 1) {

        place_index++;

    }

    if (place_index == 18) {
        place_index = 0;
        return true;
    } else {

        place_index = 0;
        return false;
    }

}
