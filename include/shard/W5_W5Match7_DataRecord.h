#ifndef SHARD_W5_W5MATCH7_DATARECORD_H
#define SHARD_W5_W5MATCH7_DATARECORD_H
#include "common.h"
#include <stddef.h>
struct ItemDataRecord {
    union {
        /* 0x00 */ u8 unk00[0xde];
        struct {
            /* 0x00 */ u8 unk00[0xc4];
            /* 0xc4 */ char token[0xf];
            /* 0xd3 */ u8 requiresEntryFlag;
            /* 0xd4 */ u8 unkd4[0xa];
        } availability;
        struct {
            /* 0x00 */ u8 unk00[4];
            /* 0x04 */ u16 sortKey;
            /* 0x06 */ u8 sortGroup;
        } ordering;
        struct {
            /* 0x00 */ u8 unk00[0xdc];
            /* 0xdc */ u16 rank;
        } ranking;
    };
    /* 0xde */ u16 category;
    /* 0xe0 */ u8 unke0[0xc];
    /* 0xec */ u16 value;
    /* 0x0EE */ u8 unk0EE[0x32];
    /* 0x120 */ s16 eligibilityThreshold;
    /* 0x122 */ u8 unk122[0xE];
    /* 0x130 */ u16 lockFlag;      /* game flag that locks the item, 0 for none */
    /* 0x132 */ u16 unlockFlag;    /* game flag that lifts lockFlag, 0 for none */
};
typedef char ItemDataRecordLockFlagOffsetCheck[offsetof(ItemDataRecord, lockFlag) == 0x130 ? 1 : -1];

struct ItemEligibilityStateA {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 value;
};
extern "C" ItemDataRecord *FUN_001ad9b4(u32 id);
#endif
