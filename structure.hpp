#ifndef METRONOME_STRUCTURE_H_
#define METRONOME_STRUCTURE_H_

/* List of Note/CombinedNote */
struct Tab {
    int nCount; // Count 
    char azName[32][6]; /* A B C D E F G */
    unsigned char azNCombined[32];
    unsigned char azOctave[32][6]; /* 0-4 */
    double azBeat[32]; /* 1: 1 beat; 0.5 Half Beat */
};

/* A Chord */
struct Chord {
    char szName[6]; /* Am7# */
    unsigned char capoPosition;
    unsigned char azPressed[6]; /* Position Pressed */
                                /* 0: E; 1-A; 2-D; 3-G; 4-B; 5-E */

    void changeCapoposition(unsigned char cpPos);
    Chord(unsigned char capo_pos=0);
};

struct ChordNote {
    char szName[6];
    unsigned char capoPosition;

    int nCount; /* Default = 6 */
    char azNote[6];
    unsigned char azOctave[6];
}

int Convert(const Chord& ch, ChordNote& cn);

#endif