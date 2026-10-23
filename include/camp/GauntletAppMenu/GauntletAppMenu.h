/* camp/GauntletAppMenu/GauntletAppMenu.c: the Gauntlet (battle-arena) app menu in the camp. */
#ifndef CAMP_GAUNTLETAPPMENU_GAUNTLETAPPMENU_H
#define CAMP_GAUNTLETAPPMENU_GAUNTLETAPPMENU_H

#include "common.h"
#include <stddef.h>

typedef struct GauntletAppMenuWork {
    /* 0x000 */ u32 task;        /* the menu's task handle */
    union {
        /* 0x004 */ u8 unk04[0x524];
        struct {
            u8 unk004[0xC];
            /* 0x010 */ u8 controller[0x64];
            /* 0x074 */ u32 entries[141];
            /* 0x2A8 */ u32 count;
            u8 unk2AC[8];
            /* 0x2B4 */ u8 forceFirst;
            /* 0x2B5 */ u8 forceSecond;
            u8 unk2B6;
            /* 0x2B7 */ u8 forceThird;
        } list;
    };
    /* 0x528 */ void *heapA;     /* heap block, freed on close */
    /* 0x52C */ void *heapB;     /* heap block, freed on close */
    /* 0x530 */ u32 handle;      /* released on close before the heap blocks */
} GauntletAppMenuWork;
typedef char GauntletAppMenuListLayoutCheck[
    offsetof(GauntletAppMenuWork, list.controller) == 0x10 &&
    offsetof(GauntletAppMenuWork, list.entries) == 0x74 &&
    offsetof(GauntletAppMenuWork, list.count) == 0x2A8 &&
    offsetof(GauntletAppMenuWork, list.forceFirst) == 0x2B4 &&
    offsetof(GauntletAppMenuWork, list.forceThird) == 0x2B7 &&
    sizeof(GauntletAppMenuWork) == 0x534 ? 1 : -1];

#endif
