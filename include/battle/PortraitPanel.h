#ifndef BATTLE_PORTRAITPANEL_H
#define BATTLE_PORTRAITPANEL_H
#include "common.h"
#include <stddef.h>
struct BattlePortraitSlot {
    s32 state, x, y;
    s32 portrait;
    u8 requested;
    u8 padding[3];
    s32 targetX, targetY;
};
struct BattlePortraitPanel {
    u32 state, frame;
    BattlePortraitSlot slots[2];
    f32 elapsed, duration;
};
struct BattlePortraitLayout { u8 prefix[8]; s16 x,y; };
typedef char BattlePortraitPanelOffsets[sizeof(BattlePortraitSlot) == 0x1C && sizeof(BattlePortraitPanel) == 0x48 && offsetof(BattlePortraitPanel, slots) == 8 ? 1 : -1];
#endif
