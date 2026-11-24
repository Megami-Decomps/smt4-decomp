/* The place window's scene (smt4): the town place whose text, tab lists and list windows it shows. Its start-up
 * (FUN_003a0d64) and tab list rebuild (FUN_003a45fc) read the same place kind and key at 0x14/0x18; names are
 * inferred from the code. */
#ifndef SMT4_SHOP_PLACESCENE_H
#define SMT4_SHOP_PLACESCENE_H

#include "common.h"
#include <stddef.h>
#include "script/ScriptVm.h"
#include "shop/CellList.h"

#define PLACE_TAB_COUNT 9

/* The cursor of one tab's list window (0x74 bytes). */
struct PlaceListCursor {
    /* 0x00 */ u8 unk00[0xD];
    /* 0x0D */ u8 enabled;
    /* 0x0E */ u8 unk0E[0x66];
};

/* The place window's work area (only the fields its functions touch). */
struct PlaceScene {
    /* 0x00000 */ u8 unk00000[4];
    /* 0x00004 */ s32 state;
    /* 0x00008 */ s32 substate;
    /* 0x0000C */ u8 unk0000C[8];
    /* 0x00014 */ u8 placeKind;
    /* 0x00015 */ u8 unk00015[3];
    /* 0x00018 */ s32 placeKey;
    /* 0x0001C */ u8 unk0001C[0x144];
    /* 0x00160 */ ScriptFile *scriptFile;
    /* 0x00164 */ void *scriptOwner;
    /* 0x00168 */ ScriptProcess *scriptA;
    /* 0x0016C */ ScriptProcess *scriptB;
    /* 0x00170 */ u8 unk00170[0x710];
    /* 0x00880 */ PlaceListCursor cursors[PLACE_TAB_COUNT];
    /* 0x00C94 */ CellList tabs[PLACE_TAB_COUNT];
    /* 0x09CA6 */ u8 unk09CA6[0xC09A];
    /* 0x15D40 */ u32 jobA;
    /* 0x15D44 */ u32 jobB;
};

typedef char PlaceSceneLayoutCheck[
    sizeof(PlaceListCursor) == 0x74 && offsetof(PlaceScene, placeKind) == 0x14 &&
    offsetof(PlaceScene, placeKey) == 0x18 && offsetof(PlaceScene, scriptFile) == 0x160 &&
    offsetof(PlaceScene, cursors) == 0x880 && offsetof(PlaceScene, tabs) == 0xC94 &&
    offsetof(PlaceScene, jobA) == 0x15D40 ? 1 : -1];

#endif
