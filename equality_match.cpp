#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

/*============================================================
 * October-05 - 2025
 *   Distance scoring
 *============================================================*/
int NOTE_VALS[21];
char NAME[21][5];
int chord[100][6];
int tabs[100][8][6];

/*==================================================*
 * Combination Dictionary
 *      Alternatives
 *        
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

int initialize() {
    /*================================================================================
     * Initialization:
     * (1) Note values
     *     
     * (2) 
     *================================================================================*/
    
    int N_OneRange = 7; 
    
    /*
        E-F-G-A-B-C
        E-F-G-H-I-J 
        C=0
    */

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
    

    return 0;
}