#ifndef SMT4A_BATTLE_BTLDEBUGMENU_H
#define SMT4A_BATTLE_BTLDEBUGMENU_H

#include "common.h"
#include <stddef.h>

struct DebugBattle;

/* The battle debug menu and its list-box job. */
struct DebugMenu {
    /* 0x00 */ u32 state;
    /* 0x04 */ s32 menuMode;
    /* 0x08 */ u32 confirmed;
    /* 0x0C */ u32 cameraKind;
    /* 0x10 */ u32 listBox;
    /* 0x14 */ u8 onlyAllies;
    /* 0x15 */ u8 onlyEnemies;
    /* 0x16 */ u8 includeParty;
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u32 mask;
    /* 0x1C */ s32 entryIndex;
};
typedef char DebugMenuLayoutCheck[offsetof(DebugMenu, listBox) == 0x10 && sizeof(DebugMenu) == 0x20 ? 1 : -1];

extern "C" {
void btlCameraApplyEditorValue(DebugMenu *menu, DebugBattle *battle, u32 index);
void btlCameraDebugApplyMenuItem(DebugMenu *menu, DebugBattle *battle, u32 index);
} /* extern "C" */

#endif
