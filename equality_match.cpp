#include "structure.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <dynsocc/fundamental/stdex/algorithm.hpp>

using namespace std;

/*============================================================
 * October-05 - 2025
 *   Distance scoring
 *============================================================*/
int NOTE_VALS[21];
char NAME[21][5];
string azNAME[21];
int chord[100][6];
int tabs[100][8][6];

Chord azCH[100];
ChordNote azCN[100];
int nCH = 0;

/*==================================================*
 * Combination Dictionary
 *      Alternatives
 *==================================================*/

int N_C = 0;
string azName[21];
int nalternative; 

int nAmplitude;
int nPitch;
int nHertz;

unsigned char oneunit[16][6];
unsigned char arrsize[16];
unsigned char nunit;

template<typename T>
int equality_count(T* p1, T* p2, int n1, int n2) {
    int i,j;
    int nSc = 0;

    for (i=0; i<n1; i++) {
        for (j=0; j<n2; j++) {
            if (p1[i] == p2[j]) {
                nSc++;
                break;
            }
        }
    }
    return nSc;
}

template<typename T>
double equality_ratio(T* p1, T* p2, int n1, int n2) {
    int nEq = equality_count(p1,p2, n1,n2);
    return (double)nEq/(double)n2;
}

int match_one(int* rhythm) {
    return 0;
}

char to_upper(char ch1) {
    if (ch1 >= 'a' && ch1 <= 'z') {
        return ch1 + 'A' - 'a';
    }
    return ch1;
}

double equality_score(const Tab& t, const ChordNote& ch) {

    /* Find distinct */
    string azNIT[21]; // Notes in Tab (distinct)
    string azNIC[6]; // Notes In Chord
    int nNIT = 0;
    int nNIC = 0;
    char szBuffer[10];
    int nEQ, nNEQ; // Equality, non-Equality

    /*==================================================
     * ES1. Get distinct Note-Octave on Tab
     * ES2. Get distinct Note-Octave on Chord
     * ES3. Equality score
     *==================================================*/

    /* Variables For Loop */
    string strNNO; // Note Name With Octave
    int nFound;
    int nIdx;

    // ES1
    for (int i=0; i<t.nCount; ++i) {
        /* */
        for (int j=0; j<t.azNCombined[i]; j++) {
            sprintf(szBuffer, "%c%d", to_upper(t.azName[i][j]), t.azOctave[i][j]);
            strNNO = szBuffer;

            if (dynsocc::algorithm::binary_search(azNIT, 0, nNIT, strNNO, nFound) == 0 && nFound >= 0) {
                dynsocc::algorithm::insert_into_sorted_asc(azNIT, 0, nNIT, strNNO, nIdx);
            }
        }
    }

    // ES2 
    for (int i=0; i<ch.nCount;i++) {
        sprintf(szBuffer, "%c%d", to_upper(ch.szName[i]), ch.azOctave[i]);
        strNNO = szBuffer;

        if (dynsocc::algorithm::binary_search(azNIC, 0, nNIC, strNNO, nFound) == 0 && nFound >= 0) {
            dynsocc::algorithm::insert_into_sorted_asc(azNIC, 0, nNIC, strNNO, nIdx);
        }
    }

    // ES3. Equality Score
    nEQ = 0;
    nNEQ = 0;

    for (int i=0; i<nNIT; i++) {
        for (int j=0; j<nNIC;j++) {
            if (azNIT[i] == azNIC[j]) {
                nEQ++;
                break;
            }
        }
    }
    
    return nEQ / nNIT;
}

int initialize() {
    /*================================================================================
     * Initialization:
     * I1) Note values
     * I2) Every Chord
     *================================================================================*/
    
    int N_OneRange = 7;
    /*==================================================
     *  E-F-G-A-B-C
     *  E-F-G-H-I-J 
     *  C=0
     *==================================================*/

    int i, j;
    int const nC1 = 6;
    int nRotation;

    const int ONE_STEP = 2;
    const int HALF_STEP  = 1;
    const int WHOLE_TONE = 2;
    const int SEMI_TONE = 1;

    NOTE_VALS[nC1] = 0;
    // NAME[nC1] = "C";

    NOTE_VALS[0] = 0;
    // NAME[0] = "E0";

    // While 
    for (int i=1; i<21;i++) {
        int nAmplitude = NOTE_VALS[i-1];
        int nHertz;

        nHertz = 0;
        nAmplitude = 100;        
    }

    // I2. Every Chord 
    nCH = 0;
    Chord A0("A", "D-1;G-1;B-2", 0);
    Chord A0_1("A", "E-5;A-4;D-2;G-2;B-5", 0);
    Chord A2("A", "E-5;A-4;E2-5", 2);
    Chord A5("A", "A-7;D-7;G-6", 5);
 
    return 0;
}

int matched_combination() {
    int n1 = 0;
    int n2 = 0;
    nunit = 18;
    /*============================================================
     * Read From File
     *============================================================*/

    unsigned char szChordDictionary[16];
    string azName[16];
    return 0;
}

int main(int argc, const char* argv[]) {
    
    /*========== 
     */

    
    return 0;
}