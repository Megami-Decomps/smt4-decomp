/* camp/CampCec/CampCecEdit.c: the StreetPass (cec) edit screen of the camp. */
#ifndef CAMP_CAMPCEC_CAMPCECEDIT_H
#define CAMP_CAMPCEC_CAMPCECEDIT_H

#include "common.h"

typedef struct CampCecEdit {
    /* 0x00 */ u32 task;                   /* the screen's task handle */
    /* 0x04 */ u8 unk04[0x8];
    /* 0x0C */ u32 handleC;                /* released on close */
    /* 0x10 */ u32 handleD;                /* released on close */
    /* 0x14 */ u8 unk14[0x8C];
    /* 0xA0 */ u32 resource;               /* released on close */
    /* 0xA4 */ void *heapA;               /* heap block, freed on close */
    /* 0xA8 */ void *heapB;               /* heap block, freed on close */
    /* 0xAC */ void *heapC;               /* heap block, freed on close */
    /* 0xB0 */ u32 handleE;                /* released on close */
    /* 0xB4 */ u8 unkB4[0x71];
    /* 0x125 */ u8 unk125;
    /* 0x126 */ u8 unk126[0x3A];
} CampCecEdit;

/* smt4a: the edit screen has a different layout; see FUN_0034280c. */
#endif
