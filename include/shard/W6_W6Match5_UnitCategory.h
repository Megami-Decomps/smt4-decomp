#ifndef SHARD_W6_W6MATCH5_UNITCATEGORY_H
#define SHARD_W6_W6MATCH5_UNITCATEGORY_H

#include "battle/BattleUnitSlot.h"

struct UnitCategoryRecord {
    u8 unk000[0x12c];
    u16 id; // 0x12c
};
struct UnitCategoryState {
    u8 unk000[0x400];
    UnitCategoryRecord *record; // 0x400
};
struct ScriptCategoryUnit {
    u8 unk00[0x20];
    UnitCategoryState *state; // 0x20
};

extern "C" {
extern u32 g_btlScriptUnit;
s32 FUN_0019acdc(s32 id, s32 flag);
}

#endif
