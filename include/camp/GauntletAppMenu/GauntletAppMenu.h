/* camp/GauntletAppMenu/GauntletAppMenu.c: the Gauntlet (battle-arena) app menu in the camp. */
#ifndef CAMP_GAUNTLETAPPMENU_GAUNTLETAPPMENU_H
#define CAMP_GAUNTLETAPPMENU_GAUNTLETAPPMENU_H

#include "common.h"
#include <stddef.h>

/* A UI sprite instance of the menu (0x8C bytes); `mode` is the playback mode at 0x3A. */
typedef struct GauntletSprite {
    u8 unk00[0x18];
    /* 0x18 */ u16 unk18;
    u8 unk1A[0x20];
    /* 0x3A */ u16 mode;
    u8 unk3C[0x50];
} GauntletSprite;

typedef struct GauntletAppMenuWork {
    /* 0x000 */ u32 task;        /* the menu's task handle */
    union {
        /* 0x004 */ u8 unk04[0x524];
        struct {
            /* 0x004 */ u32 drawTask;     /* the menu's draw task */
            /* 0x008 */ u32 mode;    /* the screen shown */
            /* 0x00C */ u32 unk00C;
            /* 0x010 */ u8 controller[0x64];
            /* 0x074 */ u32 entries[141];
            /* 0x2A8 */ u32 count;
            /* 0x2AC */ const void *table;   /* the entry table of data slot 0xD */
            /* 0x2B0 */ u32 tableCount;
            /* 0x2B4 */ s8 forceFirst;
            /* 0x2B5 */ s8 forceSecond;
            /* 0x2B6 */ u8 forceMiddle;
            /* 0x2B7 */ s8 forceThird;
            /* 0x2B8 */ u8 params[0x20];     /* draw parameter block shared by the sprites */
            /* 0x2D8 */ GauntletSprite sprites[4];
        } list;
        struct {
            u8 unk004[0x520];
            /* 0x524 */ u16 touchRegionCount;
        } touch;
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
    offsetof(GauntletAppMenuWork, list.forceSecond) == 0x2B5 &&
    offsetof(GauntletAppMenuWork, list.forceMiddle) == 0x2B6 &&
    offsetof(GauntletAppMenuWork, list.forceThird) == 0x2B7 &&
    offsetof(GauntletAppMenuWork, list.sprites) == 0x2D8 &&
    sizeof(GauntletAppMenuWork) == 0x534 ? 1 : -1];

extern "C" {
void devilDispatchTextureResource(u32 id, u32 argument, u32 first, u32 second, s32 resolveDemon);
}

#endif
