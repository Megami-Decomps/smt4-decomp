/* The battle action unit (the script unit's work block; Shin Megami Tensei IV). */
#ifndef SHARD_W4_W4MATCH2_BTLUNITS_H
#define SHARD_W4_W4MATCH2_BTLUNITS_H

#include "common.h"
#include <stddef.h>
#include "shard/W4_Match6_BtlEntry.h"

struct BattleActionUnit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x1C];
    /* 0x020 */ BtlEntry *entry;      /* the unit's battle entry */
    /* 0x024 */ u8 unk024[0x14];
    /* 0x038 */ u8 selectedUnits[109];
    /* 0x0A5 */ u8 unk0A5[0xE73];
};

typedef char BattleActionUnitSizeCheck[sizeof(BattleActionUnit) == 0xF18 &&
    offsetof(BattleActionUnit, entry) == 0x20 && offsetof(BattleActionUnit, selectedUnits) == 0x38 ? 1 : -1];

#endif
