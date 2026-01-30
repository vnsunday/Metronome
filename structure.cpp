#include "structure.hpp"
#include <cstring>
#include <tuple>

int Convert(const Chord& ch, ChordNote& cn) {
    return 0;
}

int Parse() {
}

void Chord::changeCapoposition(unsigned char cpPos) {
    memset(azPressed, cpPos, sizeof(azPressed));
}

Chord::Chord(unsigned char capo_pos) {
    changeCapoposition(capo_pos);
}

Chord::Chord(const char* szCHName, const char* string_fret, unsigned char capo_pos) {
    strcpy((char*)szCHName, szName);
    strcpy((char*)string_fret, szFret);
    changeCapoposition(capo_pos);


    // Format: E-5;A-4;E2-5
    char azS[2] {',', ';'}; // Separators

    /*==================================================
     * Parsing by a State-Machine
     * P1. Character by character
     * P2. 
     * P3. 
     *==================================================*/
    int nFL = strlen(string_fret);

    // P1.
    for (int i=0; i<nFL; i++) {
        /*  */
        char ch1 = string_fret[i];
        // Seperator
        if (ch1 == azS[0] || ch1 == azS[1]) {

        }
        else if (( 'a' <= ch1 && ch1 <= 'g' ) || ( 'A' <= ch1 && ch1 <= 'G' )) {
            // 
        }
        else if (ch1 == '-') {
            // 
        }
    }

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


int parse_syntax() {

    /*============================================================ 
     * Input:
     *     S
     * Output:
     *     TotalMatches
     *     NearlyMatches
     *============================================================*/

    /*----------------------------------------
       ParsingState at K {
           PredicatedTree
       }
       PredictionGraph {                        
       }
       Edge
       Vertex
     *----------------------------------------*/

    /*==================================================
     *    Prediction Graph
     *      [L,R,S]: Left, Right, Status
     *      
     *==================================================*/
    int nG;
    // int arV[100]; // Vertex. Each Vertex has: {L, R, Status: {Predicted, Raw, UnProcess}}
    int arE[100]; // Edge 
    std::tuple<int, int, int> arV; // Vertex. Each Vertex has: {L, R, Status: {Predicted, Raw, UnProcess}}

    int arVL[100];
    int arVR[100];
    char arVT[100];
    int arEL[100];
    int arER[100];
    int nE;

    int nL;
    int nR;
    /*==================================================*/

    return 0;
}

int describe_one_state() {
    /*==================================================
        S(n)=[s1,s2,...,sn]. Input String

        State
            Graph = { (Range[i],Type[i], SubGraph[i]) } 
                Where:
                    Range[i]=[l,r]. Type[i]=A Type | Raw 
                    SubGraph[i]=Graph
     *==================================================*/

    return 0;
}