/* title/S4Load.c: the loading screen shown from the title (Apocalypse only). */
#ifndef TITLE_S4LOAD_H
#define TITLE_S4LOAD_H

#include "common.h"

/* The loading screen's block, kept by a module global. */
typedef struct S4Load {
    /* 0x000 */ u32 job;          /* job that runs the screen */
    /* 0x004 */ u8 closing;       /* set once the screen is being torn down */
    /* 0x005 */ u8 unk05[0x0F];
    /* 0x014 */ void *data;       /* heap block */
    /* 0x018 */ u8 unk18[0x290];
    /* 0x2A8 */ void *dataA;      /* heap blocks */
    /* 0x2AC */ void *dataB;
    /* 0x2B0 */ void *process;    /* script process object */
    /* 0x2B4 */ u8 unk2B4[4];
    /* 0x2B8 */ u32 unk2B8;
} S4Load;

#endif
