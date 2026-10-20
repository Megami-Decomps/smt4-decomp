/* camp/CampCec/CampCecSetting.c: the StreetPass (cec) settings screen of the camp. */
#ifndef CAMP_CAMPCEC_CAMPCECSETTING_H
#define CAMP_CAMPCEC_CAMPCECSETTING_H

#include "common.h"

#define CAMPCECSETTING_ITEM_COUNT 7

typedef struct CampCecSetting {
    /* 0x00 */ u32 task;         /* the screen's task handle */
    /* 0x04 */ u32 resource;     /* released on close */
    /* 0x08 */ void *heapA;      /* heap block, freed on close */
    /* 0x0C */ void *heapB;      /* heap block, freed on close */
    /* 0x10 */ s32 items[CAMPCECSETTING_ITEM_COUNT];  /* menu entry ids, 0..6 */
    /* 0x2C */ s32 unk2C;
    /* 0x30 */ s32 unk30;
    /* 0x34 */ s32 unk34;
    /* 0x38 */ s32 unk38;
    /* 0x3C */ u8 unk3C;
    /* 0x3D */ u8 unk3D[3];
    /* 0x40 */ u8 done;          /* the screen has finished */
    /* 0x41 */ u8 unk41[3];
} CampCecSetting;

#endif
