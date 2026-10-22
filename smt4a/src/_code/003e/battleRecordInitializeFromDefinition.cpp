#include "common.h"

struct BattleStatRecord {
    /* 0x000 */ u16 base[7];
    /* 0x00E */ s16 maximum;
    /* 0x010 */ u16 secondaryMaximum;
    /* 0x012 */ u8 unk012[0xa];
    /* 0x01C */ u16 currentBase[7];
    /* 0x02A */ s16 current;
    /* 0x02C */ u16 secondaryCurrent;
    /* 0x02E */ u8 unk02e[6];
    /* 0x034 */ u16 skills[8];
    /* 0x044 */ u8 unk044[0x1c];
    /* 0x060 */ u16 flags;
    /* 0x062 */ u16 id;
    /* 0x064 */ u16 type;
    /* 0x066 */ u8 unk066[0xc6];
    /* 0x12C */ u16 fallbackId;
};

struct BattleStatDefinition {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u16 type;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ u16 first;
    /* 0x1A */ u16 second;
    /* 0x1C */ u16 unk1c;
    /* 0x1E */ u16 third;
    /* 0x20 */ u16 fourth;
    /* 0x22 */ u16 fifth;
    /* 0x24 */ u16 sixth;
    /* 0x26 */ u16 seventh;
    /* 0x28 */ u8 unk28[0x18];
    /* 0x40 */ u16 skills[8];
};

extern "C" {
void sysMemClear(void *buffer, u32 size);
u16 FUN_0019e52c(u16 id);
BattleStatDefinition *FUN_00184310(u16 id);
void FUN_004bcd90(BattleStatRecord *record);
s32 FUN_0018416c(u16 id);
void FUN_002a6894(BattleStatRecord *record);
}

// Initialize a battle record from its override or saved fallback definition.
extern "C" void battleRecordInitializeFromDefinition(BattleStatRecord *record, u16 overrideId)
{
    if (record == NULL)
        return;
    sysMemClear(record, 300);
    u16 id = FUN_0019e52c(record->fallbackId);
    if (overrideId != 0)
        id = overrideId;
    if (id == 0)
        return;
    record->id = id;
    BattleStatDefinition *definition = FUN_00184310(id);
    record->type = definition->type;
    record->base[0] = definition->first;
    record->base[1] = definition->second;
    record->base[2] = definition->third;
    record->base[4] = definition->fifth;
    record->base[5] = definition->sixth;
    record->base[6] = definition->seventh;
    record->base[3] = definition->fourth;
    record->currentBase[0] = 0;
    record->currentBase[1] = 0;
    record->currentBase[2] = definition->third;
    record->currentBase[4] = definition->fifth;
    record->currentBase[5] = definition->sixth;
    record->currentBase[6] = definition->seventh;
    record->currentBase[3] = definition->fourth;
    record->skills[0] = definition->skills[0];
    record->skills[1] = definition->skills[1];
    record->skills[2] = definition->skills[2];
    record->skills[3] = definition->skills[3];
    record->skills[4] = definition->skills[4];
    record->skills[5] = definition->skills[5];
    record->skills[6] = definition->skills[6];
    record->skills[7] = definition->skills[7];
    FUN_004bcd90(record);
    s16 maximum = record->maximum;
    if (FUN_0018416c(record->id))
        maximum = (s16)(s32)(maximum * 1.25f);
    record->current = maximum;
    record->secondaryCurrent = record->secondaryMaximum;
    FUN_002a6894(record);
}
