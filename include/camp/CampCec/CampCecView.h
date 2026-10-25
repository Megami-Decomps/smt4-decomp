/* camp/CampCec/CampCecView.c: the StreetPass (cec) view screen of the camp. */
#ifndef CAMP_CAMPCEC_CAMPCECVIEW_H
#define CAMP_CAMPCEC_CAMPCECVIEW_H

#include "common.h"

/* Work area, Shin Megami Tensei IV. */
typedef struct CampCecView {
    /* 0x00 */ u32 task;                   /* the screen's task handle */
    /* 0x04 */ u8 unk04[0x128];
    /* 0x12C */ u32 handle[3];              /* released on close */
    /* 0x138 */ u32 handleB;                /* released on close */
    /* 0x13C */ u8 unk13C[0x20];
    /* 0x15C */ u8 done;                    /* the screen has finished */
    /* 0x15D */ u8 unk15D[0x3];
    /* 0x160 */ void *heap;                /* heap block, freed on close */
    /* 0x164 */ u32 unk164;
} CampCecView;

/* Work area, Shin Megami Tensei IV: Apocalypse. */
typedef struct CampCecViewA {
    /* 0x00 */ u32 task;                   /* the screen's task handle */
    /* 0x04 */ u8 unk04[0x100];
    /* 0x104 */ u32 handle[3];              /* released on close */
    /* 0x110 */ u32 handleB;                /* released on close */
    /* 0x114 */ u8 unk114[0x20];
    /* 0x134 */ u8 done;                    /* the screen has finished */
    /* 0x135 */ u8 unk135[0x3];
    /* 0x138 */ void *heap;                /* heap block, freed on close */
} CampCecViewA;

extern "C" {
u32 overlayIsNotBusy(void);
}

extern "C" {
u32 FUN_002005a0(int id);
}

extern "C" {
u8 *FUN_002e2ec0(void);
}

extern "C" {
void effCreateRegisteredPair(u32 param1, u32 param2);
}

#endif
