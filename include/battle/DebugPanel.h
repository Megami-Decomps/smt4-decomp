#ifndef BATTLE_DEBUGPANEL_H
#define BATTLE_DEBUGPANEL_H
#include "common.h"
#include <stddef.h>
struct BattleDebugPanelWork {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 panelJob;
};
struct BattleDebugPanelParent {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u32 job;
};
typedef char BattleDebugPanelOffsets[(offsetof(BattleDebugPanelWork, panelJob) == 0x10 && offsetof(BattleDebugPanelParent, job) == 0x80) ? 1 : -1];
#endif
