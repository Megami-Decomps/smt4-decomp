#include "gamedata/UnitStats.h"
#include "gamedata/NkmBaseRecord.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

extern void bitsetSetBit(void *bits, u32 bit);
extern void unitRecalculateEffectiveStats(StatBlock *block);

void FUN_0029dc74(u32 id, StatBlock *block)
{
    NkmBaseRecord *record = nkmBaseGetRecord(id);

    memClear(block, 0x604);
    block->id = id;
    block->level = record->level;
    block->base[0] = record->baseHp;
    block->base[1] = record->baseMp;
    block->base[2] = record->stats[0];
    block->base[4] = record->stats[2];
    block->base[5] = record->stats[3];
    block->base[6] = record->stats[4];
    block->base[3] = record->stats[1];
    block->cur[0] = 0;
    block->cur[1] = 0;
    block->cur2 = record->stats[0];
    block->cur3 = record->stats[2];
    block->cur4 = record->stats[3];
    block->cur5 = record->stats[4];
    block->cur6 = record->stats[1];
    block->resist[0] = record->skills[0];
    block->resist[1] = record->skills[1];
    block->resist[2] = record->skills[2];
    block->resist[3] = record->skills[3];
    block->resist[4] = record->skills[4];
    block->resist[5] = record->skills[5];
    block->resist[6] = record->skills[6];
    block->resist[7] = record->skills[7];
    block->bits = 0;
    bitsetSetBit(block, record->innateFlag);
    unitRecalculateEffectiveStats(block);
    block->hp = block->maxHp;
    block->mp = block->maxMp;
}

} /* extern "C" */
