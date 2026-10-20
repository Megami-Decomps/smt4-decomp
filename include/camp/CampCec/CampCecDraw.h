/* camp/CampCec/CampCecDraw.c: sprite handle sets used by the cec screens. */
#ifndef CAMP_CAMPCEC_CAMPCECDRAW_H
#define CAMP_CAMPCEC_CAMPCECDRAW_H

#include "common.h"

#define N7 7
#define N8 8
#define N10 10

/* IV: a set of three sprite handles. */
typedef struct CampCecDrawSet {
    /* 0x00 */ u32 handle[3];              /* sprite handles */
    /* 0x0C */ u8 flag;
    /* 0x0D */ u8 unk0D[0x3];
} CampCecDrawSet;

/* Apocalypse: a set of four sprite handles. */
typedef struct CampCecDrawSetA {
    /* 0x00 */ u32 handle[3];              /* sprite handles */
    /* 0x0C */ u8 flag;
    /* 0x0D */ u8 unk0D[0x3];
    /* 0x10 */ u32 handleD;
    /* 0x14 */ u32 unk14;
} CampCecDrawSetA;

/* IV: the draw page set created by FUN_0031b860. */
typedef struct CampCecDrawPage {
    /* 0x00 */ u32 handle0;
    /* 0x04 */ u32 handle1;
    /* 0x08 */ u32 tab[N7];
    /* 0x24 */ u16 tabCount[N7];
    /* 0x32 */ u16 unk32;
    /* 0x34 */ u32 handle34;
    /* 0x38 */ u32 handle38;
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ u32 handle40;
    /* 0x44 */ u32 unk44;
    /* 0x48 */ u32 item[N8];
    /* 0x68 */ u32 itemState[N8];
    /* 0x88 */ u32 unk88;
    /* 0x8C */ u32 handle8C;
    /* 0x90 */ u32 unk90;
    /* 0x94 */ u8 flag;
    /* 0x95 */ u8 unk95[0x3];
} CampCecDrawPage;

/* Apocalypse: the draw page set created by FUN_003b5e8c. */
typedef struct CampCecDrawPageA {
    /* 0x00 */ u32 handle0;
    /* 0x04 */ u32 handle1;
    /* 0x08 */ u32 tab[N7];
    /* 0x24 */ u16 tabCount[N7];
    /* 0x32 */ u16 unk32;
    /* 0x34 */ u32 handle34;
    /* 0x38 */ u32 handle38;
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ u32 handle40;
    /* 0x44 */ u32 unk44;
    /* 0x48 */ u32 handle48;
    /* 0x4C */ u32 unk4C;
    /* 0x50 */ u32 item[N8];
    /* 0x70 */ u32 itemState[N8];
    /* 0x90 */ u16 unk90;
    /* 0x92 */ u8 flag;
    /* 0x93 */ u8 unk93;
    /* 0x94 */ u32 tail[9];
} CampCecDrawPageA;

/* Apocalypse: ten sprite handles with counters (FUN_0036c700). */
typedef struct CampCecDrawList {
    /* 0x00 */ u32 handle[N10];
    /* 0x28 */ u16 count[N10];
    /* 0x3C */ u32 state[N10];
    /* 0x64 */ u8 unk64[0x34];
} CampCecDrawList;

#endif
