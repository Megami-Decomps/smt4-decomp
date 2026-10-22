#ifndef GFX_MODELGROUPS_H
#define GFX_MODELGROUPS_H

#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include <stddef.h>

struct ModelGroupEntry {
    u8 active;
    u8 unk01[0x43];
};

struct ModelGroupSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x1F];
    /* 0x20 */ AsdMdlObject *model;
    /* 0x24 */ u8 pending;
    /* 0x25 */ u8 unk25[7];
};
struct ModelGroups {
    /* 0x0000 */ union {
        u8 unk0000[0x1114];
        struct {
            u8 unk0000[0x14];
            ModelGroupEntry records[64];
        } entries;
    };
    /* 0x1114 */ ModelGroupSlot primary[9];
    /* 0x12A0 */ ModelGroupSlot secondary[3];
};

typedef char ModelGroupSlotSizeCheck[sizeof(ModelGroupSlot) == 0x2C ? 1 : -1];
typedef char ModelGroupEntriesLayoutCheck[sizeof(ModelGroupEntry) == 0x44 &&
    offsetof(ModelGroups, entries.records) == 0x14 && offsetof(ModelGroups, primary) == 0x1114 &&
    offsetof(ModelGroups, secondary) == 0x12A0 && sizeof(ModelGroups) == 0x1324 ? 1 : -1];

#endif
