#ifndef GAMEDATA_PACKEDSKILLSLOT_H
#define GAMEDATA_PACKEDSKILLSLOT_H

#include "common.h"

struct PackedSkillSlot {
    /* 0x00, bits 0-9 */ u16 id : 10;
    /* 0x00, bits 10-15 */ u16 unk00 : 6;
};

typedef char PackedSkillSlotSizeCheck[sizeof(PackedSkillSlot) == 2 ? 1 : -1];

#endif
