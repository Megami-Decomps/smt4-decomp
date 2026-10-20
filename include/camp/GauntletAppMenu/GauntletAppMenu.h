/* camp/GauntletAppMenu/GauntletAppMenu.c: the Gauntlet (battle-arena) app menu in the camp. */
#ifndef CAMP_GAUNTLETAPPMENU_GAUNTLETAPPMENU_H
#define CAMP_GAUNTLETAPPMENU_GAUNTLETAPPMENU_H

#include "common.h"

typedef struct GauntletAppMenuWork {
    /* 0x000 */ u32 task;        /* the menu's task handle */
    /* 0x004 */ u8 unk04[0x524];
    /* 0x528 */ void *heapA;     /* heap block, freed on close */
    /* 0x52C */ void *heapB;     /* heap block, freed on close */
    /* 0x530 */ u32 handle;      /* released on close before the heap blocks */
} GauntletAppMenuWork;

#endif
