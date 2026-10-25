#ifndef SHARD_W5_W5MATCH7_SCRIPTUNIT_H
#define SHARD_W5_W5MATCH7_SCRIPTUNIT_H
#include "battle/BattleUnitSlot.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "shard/W4_Match1b_Node.h"
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
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
}
#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_00295cec(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_00298dc8(int index);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 affinityShouldReplaceState(s32 current, s32 incoming);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void asdTextDrawDirectoryEntry(AsdText *text, u32 font, s32 mode, s32 x, s32 y, RelativeDirectory *directory, u32 index);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 flagValueIsPositive(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void nodeTreeReleaseFollowingSiblings(ReleaseTreeNode *node);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_00237da0(u32 a, u32 b, u32 c, u32 d, const void *data, u32 flags, u32 e, u32 h, u32 i, u32 j);

#ifdef __cplusplus
}
#endif

#endif
