/* camp/GauntletAppMenu/GauntletAppMenu.c: the Gauntlet (battle-arena) app menu in the camp. */
#ifndef CAMP_GAUNTLETAPPMENU_GAUNTLETAPPMENU_H
#define CAMP_GAUNTLETAPPMENU_GAUNTLETAPPMENU_H

#include "common.h"
#include <stddef.h>
#include "script/ScriptVm.h"
#include "ui/UiSpriteState.h"

typedef UiSpriteState GauntletSprite;

/* The menu's sort preference byte (gameDataGetSortPreferences(), smt4a saveGetUserSettingsBlock()). */
enum {
    GAUNTLET_APP_SORT_PREFERENCE = 13
};

typedef struct GauntletAppMenuWork {
    /* 0x000 */ u32 task;        /* the menu's task handle */
    union {
        /* 0x004 */ u8 unk04[0x524];
        struct {
            /* 0x004 */ u32 drawTask;     /* the menu's draw task */
            /* 0x008 */ u32 mode;    /* the screen shown */
            /* 0x00C */ s32 selection;       /* the top screen's row (0: buy, 1: browse) */
            /* 0x010 */ u8 controller[0x64];
            /* 0x074 */ u32 entries[141];
            /* 0x2A8 */ u32 count;
            /* 0x2AC */ const void *table;   /* the entry table of data slot 0xD */
            /* 0x2B0 */ u32 tableCount;
            /* 0x2B4 */ s8 forceFirst;
            /* 0x2B5 */ s8 forceSecond;
            /* 0x2B6 */ s8 forceMiddle;
            /* 0x2B7 */ s8 forceThird;
            /* 0x2B8 */ u8 params[0x20];     /* draw parameter block shared by the sprites */
            /* 0x2D8 */ GauntletSprite sprites[4];
        } list;
        struct {
            u8 unk004[0x504];
            /* 0x508 */ s16 regions[14];     /* touch regions: [0..9] the rows, [11..13] the scroll bar */
            /* 0x524 */ u16 touchRegionCount;
        } touch;
    };
    /* 0x528 */ void *heapA;     /* heap block, freed on close */
    /* 0x52C */ void *heapB;     /* heap block, freed on close */
    /* 0x530 */ ScriptProcess *handle;      /* released on close before the heap blocks */
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

/* Apocalypse: the work has one more word (0x538 bytes). */
typedef struct GauntletAppMenuWorkA : GauntletAppMenuWork {
    /* 0x534 */ s32 idleFrames;  /* frames since the app list's cursor last moved */
} GauntletAppMenuWorkA;
typedef char GauntletAppMenuWorkALayoutCheck[
    offsetof(GauntletAppMenuWork, touch.regions) == 0x508 &&
    offsetof(GauntletAppMenuWork, touch.touchRegionCount) == 0x524 &&
    sizeof(GauntletAppMenuWorkA) == 0x538 ? 1 : -1];

extern "C" {
void devilDispatchTextureResource(u32 id, u32 argument, u32 first, u32 second, s32 resolveDemon);
void gauntletAppMenuDrawScreen(GauntletAppMenuWork *menu);
}

#endif
