#include "structure.hpp"

int Convert(const Chord& ch, ChordNote& cn) {
    return 0;
}

void Chord::changeCapoposition(unsigned char cpPos) {
    memset(azPressed, cpPos, sizeof(azPressed));
}

Chord::Chord(unsigned char capo_pos=0) {
    changeCapoposition(capo_pos);
}
