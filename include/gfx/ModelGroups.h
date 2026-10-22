#ifndef GFX_MODELGROUPS_H
#define GFX_MODELGROUPS_H

#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

struct ModelGroupSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x1F];
    /* 0x20 */ AsdMdlObject *model;
    /* 0x24 */ u8 pending;
    /* 0x25 */ u8 unk25[7];
};
struct ModelGroups {
    /* 0x0000 */ u8 unk0000[0x1114];
    /* 0x1114 */ ModelGroupSlot primary[9];
    /* 0x12A0 */ ModelGroupSlot secondary[3];
};

typedef char ModelGroupSlotSizeCheck[sizeof(ModelGroupSlot) == 0x2C ? 1 : -1];

#endif
