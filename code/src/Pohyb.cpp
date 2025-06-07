#include "hdr/Global_stuff.h"


int mov_index = 0;
int place_index = 0;



void Dopredu(int pohyb[]) {

    while(pohyb[mov_index] != 1) {

        mov_index += 1;

    }

    pohyb[mov_index] = 0;
    pohyb[mov_index + 1] = 1;

    mov_index = 0;

}


void Dozadu(int pohyb[]) {

    while(pohyb[mov_index] != 1) {

        mov_index += 1;

    }

    pohyb[mov_index] = 0;
    pohyb[mov_index - 1] = 1;

    mov_index = 0;

}

bool les_check() {

    while(pohyb[place_index] != 1) {

        place_index += 1;

    }

    if (place_index < 3) {

        return true;
    } else {


        return false;
    }


}

bool predhrad_check() {

    while(pohyb[place_index] != 1) {

        place_index += 1;

    }

    if (place_index > 3 || place_index < 7) {

        return true;
    } else {


        return false;
    }


}

bool hrad_check() {

    while(pohyb[place_index] != 1) {

        place_index += 1;

    }

    if (place_index == 7) {

        return true;
    } else {


        return false;
    }

}

bool kral_check() {

    while(pohyb[place_index] != 1) {

        place_index += 1;

    }

    if (place_index == 9) {

        return true;
    } else {


        return false;
    }

}

bool skala_check() {

    while(pohyb[place_index] != 1) {

        place_index += 1;

    }

    if (place_index > 9 || place_index < 13) {

        return true;
    } else {


        return false;
    }

}

bool hrbitov_check() {

    while(pohyb[place_index] != 1) {

        place_index += 1;

    }

    if (place_index > 13 || place_index < 17) {

        return true;
    } else {


        return false;
    }

}

bool predchram_check() {

    while(pohyb[place_index] != 1) {

        place_index += 1;

    }

    if (place_index == 17) {

        return true;
    } else {


        return false;
    }

}

bool chram_check() {

    while(pohyb[place_index] != 1) {

        place_index += 1;

    }

    if (place_index == 18) {

        return true;
    } else {


        return false;
    }

}
