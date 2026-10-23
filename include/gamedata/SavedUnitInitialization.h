#ifndef GAMEDATA_SAVED_UNIT_INITIALIZATION_H
#define GAMEDATA_SAVED_UNIT_INITIALIZATION_H
#include "shard/W6_W6Match2_RecordValue.h"
#include <stddef.h>

union SavedUnitInitialization {
    RecordValue record;
    struct {
        /* 0x00 */ u16 level;
        /* 0x02 */ u16 stats[5];
        /* 0x0C */ u16 current[5];
        /* 0x16 */ u8 flags;
        /* 0x17 */ u8 unk17;
        /* 0x18 */ u16 id;
        /* 0x1A */ u16 kind;
        /* 0x1C */ u16 skills[8];
        /* 0x2C */ u32 unk2C;
        /* 0x30 */ u32 experience;
    } values;
};
typedef char SavedUnitInitializationLayoutCheck[
    sizeof(SavedUnitInitialization) == 0x34 &&
    offsetof(SavedUnitInitialization, values.stats) == 2 &&
    offsetof(SavedUnitInitialization, values.flags) == 0x16 &&
    offsetof(SavedUnitInitialization, values.id) == 0x18 &&
    offsetof(SavedUnitInitialization, values.skills) == 0x1C &&
    offsetof(SavedUnitInitialization, values.experience) == 0x30 ? 1 : -1];

/* gameDataBlocksGetSaveData returns the save body at allocation offset +0x88. */
struct SavedUnitDataBody {
    /* 0x0000 */ u8 unk0000[0xC170];
    /* 0xC170 */ SavedUnitInitialization units[0x501];
};
typedef char SavedUnitDataBodyOffsetCheck[
    offsetof(SavedUnitDataBody, units) == 0xC170 ? 1 : -1];
#endif
