#ifndef SHARD_W5_W5MATCH7_SCRIPTUNIT_H
#define SHARD_W5_W5MATCH7_SCRIPTUNIT_H
#include "common.h"
struct ScriptUnitEntry;
struct ScriptUnitData {
    /* 0x000 */ u8 unk000[0x110];
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
ScriptUnit *btlUnitGet(u32 id);
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
}
#endif
