/* The table at 0x5f32a0: 0x17c-byte runtime entries, `count` of them in the header at 0x580c90. */
#ifndef SHARD_RUNTIME_ENTRY_TABLE_H
#define SHARD_RUNTIME_ENTRY_TABLE_H

#include "common.h"

struct RuntimeEntryTable {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 count;
};

struct RuntimeEntry {
    /* 0x000 */ u8 unk000[0x12c];
    /* 0x12c */ s32 id;
    /* 0x130 */ u8 unk130[0x164 - 0x130];
    /* 0x164 */ u8 flagged;
    /* 0x165 */ u8 unk165;
    /* 0x166 */ u16 first;
    /* 0x168 */ u16 second;
    /* 0x16a */ u8 unk16a[0x174 - 0x16a];
    /* 0x174 */ s32 target;
    /* 0x178 */ u8 unk178[4];
};

extern "C" {
extern RuntimeEntryTable DAT_00580c90;
extern RuntimeEntry DAT_005f32a0[];
}

#endif
