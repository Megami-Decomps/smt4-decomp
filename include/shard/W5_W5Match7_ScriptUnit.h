#ifndef SHARD_W5_W5MATCH7_SCRIPTUNIT_H
#define SHARD_W5_W5MATCH7_SCRIPTUNIT_H
#include "battle/BattleUnitSlot.h"
struct ScriptEntryInfo {
    /* 0x000 */ u8 unk000[0x12c];
    /* 0x12C */ u16 id;
};
struct ScriptUnitEntry {
    /* 0x000 */ u64 flags;
    /* 0x008 */ u8 unk008[0x3ac];
    /* 0x3b4 */ u32 values[1];
    /* 0x3B8 */ u8 unk3B8[0x48];
    /* 0x400 */ ScriptEntryInfo *info;
};
struct ScriptUnitData {
    /* 0x000 */ u8 unk000[2];
    /* 0x002 */ u16 id;
    /* 0x004 */ u8 unk004[0x10c];
    /* 0x110 */ u16 flags;
    /* 0x112 */ u8 unk112[0x40];
    /* 0x152 */ u16 values[1];
};
struct ScriptUnit {
    union {
        /* 0x00 */ u8 unk00[0x28];
        struct {
            /* 0x00 */ u8 unk00BeforeEntry[0x20];
            /* 0x20 */ ScriptUnitEntry* entry;
        } entryView;
    };
    /* 0x28 */ ScriptUnitData *data;
};
extern "C" {
extern u32 g_btlScriptUnit;
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
}
#endif
