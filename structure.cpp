#include "structure.hpp"
#include <cstring>

int Convert(const Chord& ch, ChordNote& cn) {
    return 0;
}

void Chord::changeCapoposition(unsigned char cpPos) {
    memset(azPressed, cpPos, sizeof(azPressed));
}

Chord::Chord(unsigned char capo_pos) {
    changeCapoposition(capo_pos);
}

Chord::Chord(const char* szCHName, const char* string_fret, unsigned char capo_pos) {
    strcpy((char*)szCHName, szName);
    changeCapoposition(capo_pos);

    /*
    int nFret = sizeof(string_fret)/sizeof(int);
    int nIdx = 0;

    if (nFret % 2 != 0) {
        throw "Invalid";
    }

    const char* sz1 = "D-2; G-2;B-2;";


    while (nIdx < nFret) {
        int nString = string_fret[nIdx++];
        int nFret = string_fret[nIdx++];

        if (nString >=0 && nString < 6) {
            azPressed[nString] = nFret;
        }
        else {
            throw "Invalid";
        }
    }
    */
}