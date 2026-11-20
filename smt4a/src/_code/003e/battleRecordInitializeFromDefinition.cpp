#include "gamedata/NkmBaseRecordA.h"

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

extern "C" {
void sysMemClear(void *buffer, u32 size);
u16 dataTable10FindValue(u16 id);
void unitRecomputeDerivedStats(BattleStatRecord *record);
s32 unitHasRankingBonus(u16 id);
void saveMarkIdListSeen(BattleStatRecord *record);
}

// Initialize a battle record from its override or saved fallback definition.
extern "C" void battleRecordInitializeFromDefinition(BattleStatRecord *record, u16 overrideId)
{
    if (record == NULL)
        return;
    sysMemClear(record, 300);
    u16 id = dataTable10FindValue(record->fallbackId);
    if (overrideId != 0)
        id = overrideId;
    if (id == 0)
        return;
    record->id = id;
    NkmBaseRecordA *definition = nkmBaseGetRecord(id);
    record->type = definition->level;
    record->base[0] = definition->baseHp;
    record->base[1] = definition->baseMp;
    record->base[2] = definition->stats[0];
    record->base[4] = definition->stats[2];
    record->base[5] = definition->stats[3];
    record->base[6] = definition->stats[4];
    record->base[3] = definition->stats[1];
    record->currentBase[0] = 0;
    record->currentBase[1] = 0;
    record->currentBase[2] = definition->stats[0];
    record->currentBase[4] = definition->stats[2];
    record->currentBase[5] = definition->stats[3];
    record->currentBase[6] = definition->stats[4];
    record->currentBase[3] = definition->stats[1];
    record->skills[0] = definition->skills.ids[0];
    record->skills[1] = definition->skills.ids[1];
    record->skills[2] = definition->skills.ids[2];
    record->skills[3] = definition->skills.ids[3];
    record->skills[4] = definition->skills.ids[4];
    record->skills[5] = definition->skills.ids[5];
    record->skills[6] = definition->skills.ids[6];
    record->skills[7] = definition->skills.ids[7];
    unitRecomputeDerivedStats(record);
    s16 maximum = record->maximum;
    if (unitHasRankingBonus(record->id))
        maximum = (s16)(s32)(maximum * 1.25f);
    record->current = maximum;
    record->secondaryCurrent = record->secondaryMaximum;
    saveMarkIdListSeen(record);
}
