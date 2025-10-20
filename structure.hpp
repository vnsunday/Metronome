#ifndef METRONOME_STRUCTURE_H_
#define METRONOME_STRUCTURE_H_

/* List of Note/CombinedNote */
struct Tab {
    int nNote; // Count 
    char azName[32][6]; /* A B C D E F G */
    unsigned char azNCombined[32];
    unsigned char azOctave[32][6]; /* 0-4 */
};

/* A Chord */
struct Chord {
    char szName[6]; /* Am7# */
    unsigned char capoPosition;
    unsigned char azPressed[6]; /* Position Pressed */

    void setCaposposition(unsigned char cpPos);
};

#endif