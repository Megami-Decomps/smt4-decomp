/* camp/CampCec/CampCecEdit.c: the StreetPass (cec) edit screen of the camp. */
#ifndef CAMP_CAMPCEC_CAMPCECEDIT_H
#define CAMP_CAMPCEC_CAMPCECEDIT_H

#include "common.h"
#include <stddef.h>

typedef struct CampCecEdit {
    /* 0x00 */ u32 task;                   /* the screen's task handle */
    /* 0x04 */ u32 linkHolder;
    /* 0x08 */ u32 requestHandle;
    /* 0x0C */ u32 handleC;                /* released on close */
    /* 0x10 */ u32 handleD;                /* released on close */
    /* 0x14 */ u8 unk14[0xC];
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u8 unk24;
    /* 0x25 */ u8 unk25[0x3];
    /* 0x28 */ u8 selectedImage[1];
    /* 0x29 */ u8 unk29[0xB];
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u8 unk38;
    /* 0x39 */ u8 unk39[0xF];
    /* 0x48 */ u32 unk48;
    /* 0x4C */ u8 unk4C;
    /* 0x4D */ u8 unk4D[0xF];
    /* 0x5C */ u32 unk5C;
    /* 0x60 */ u8 unk60;
    /* 0x61 */ u8 unk61[0xF];
    /* 0x70 */ u32 unk70;
    /* 0x74 */ u8 unk74;
    /* 0x75 */ u8 unk75[0x2B];
    /* 0xA0 */ u32 resource;               /* released on close */
    /* 0xA4 */ void *heapA;               /* heap block, freed on close */
    /* 0xA8 */ void *heapB;               /* heap block, freed on close */
    /* 0xAC */ void *heapC;               /* heap block, freed on close */
    /* 0xB0 */ u32 handleE;                /* released on close */
    /* 0xB4 */ s32 (*stateHandlers[21])(struct CampCecEdit *edit); /* 1 = close, 2 = change state */
    /* 0x108 */ s32 prevState;
    /* 0x10C */ s32 state;
    /* 0x110 */ s32 nextState;            /* -1 = none */
    /* 0x114 */ u8 unk114[0x11];
    /* 0x125 */ u8 unk125;
    /* 0x126 */ u8 unk126[0x3A];
} CampCecEdit;

/* smt4a: the edit screen has a different layout; see FUN_0034280c. */
typedef char CampCecEditLayoutCheck[sizeof(CampCecEdit) == 0x160 ? 1 : -1];

typedef char CampCecEditStateOffsets[offsetof(CampCecEdit, unk74) == 0x74 && offsetof(CampCecEdit, nextState) == 0x110 && offsetof(CampCecEdit, unk125) == 0x125 ? 1 : -1];
typedef char CampCecEditOffsets[offsetof(CampCecEdit, requestHandle) == 8 && offsetof(CampCecEdit, selectedImage) == 0x28 ? 1 : -1];

#endif
