/* NON_MATCHING: one scheduling difference: the 0x1BE clear's address is computed after the unk116 store instead of before it (a `u8 *firstClearGroup = unit->clear1BE;` temporary hoisted above the stores reproduces it, but it is steering). */
#include "battle/BattleUnitInit.h"
#include "gamedata/NkmBaseRecordA.h"
#include "runtime/String.h"

extern "C" {

s32 recordGetScaledMaximum(UnitSourceRecord *record);
u32 randomGetLowerTenBits(UnitSourceRecord *record, u32 index);
u32 randomGetUpperSixBits(UnitSourceRecord *record, u32 index);
u32 partySlotFindIndex(UnitSourceRecord *record);
void clearTwoWords(void *words);
void sysMemClear(void *memory, u32 size);

/* Initializes a battle unit's state block from a party demon record; `enemy` marks a unit that is not
 * one of the party's slots. */
void btlInitializeDemonUnitState(u32 unused, BattleUnitState *unit, UnitSourceRecord *record, s32 enemy)
{
    NkmBaseRecordA *model;
    s32 i;

    unit->kind = 2;
    if (enemy != 0) {
        unit->unk008 = -1;
    } else {
        unit->unk008 = partySlotFindIndex(record);
    }
    unit->sourceId = record->id;
    unit->unk004 = -1;
    unit->unk006 = -1;
    unit->clearedD4[0] = 0;
    unit->clearedD4[1] = 0;
    unit->clearedD4[2] = 0;
    model = nkmBaseGetRecord(unit->sourceId);
    if ((model->extraFlags & 1) != 0) {
        unit->clearedD4[3] = 0;
    } else {
        unit->clearedD4[3] = 1;
    }
    unit->current.hp = record->hp;
    unit->current.maxHp = recordGetScaledMaximum(record);
    unit->current.mp = record->mp;
    unit->current.level = record->level;
    unit->current.stats[0] = record->stats[0];
    unit->current.stats[1] = record->stats[1];
    unit->current.stats[2] = record->stats[2];
    unit->current.stats[3] = record->stats[3];
    unit->current.stats[4] = record->stats[4];
    unit->initial = unit->current;
    unit->unk110 = record->unk60;
    unit->unk112 = 0;
    unit->unk114 = 0;
    unit->unk116 = record->unk64;
    unit->unk228 = 0;
    clearTwoWords(unit->clear1BE);
    clearTwoWords(unit->clear1C6);
    clearTwoWords(unit->clear1CE);
    rt_memclr(unit->clear1D6, 0x50);
    for (i = 0; i < 21; i++) {
        unit->skills[i].id = randomGetLowerTenBits(record, i & 0xFF);
        unit->skills[i].category = randomGetUpperSixBits(record, i & 0xFF);
        unit->learnable[i].id = randomGetLowerTenBits(record, i & 0xFF);
        unit->learnable[i].category = randomGetUpperSixBits(record, i & 0xFF);
        unit->learnableCategory[i] = unit->learnable[i].category;
    }
    unit->unk1BB = model->battleRace;
    switch (model->category) {
    case 1:
        unit->unk1BC = 1;
        break;
    case 4:
        unit->unk1BC = 0;
        break;
    case 5:
        unit->unk1BC = 2;
        break;
    }
    unit->affinities = record->affinities;
    sysMemClear(unit->flagsA, 0x15);
    unit->flagsB.first = 0;
    unit->flagsB.second = 0;
    unit->flagsB.third = 0;
    unit->flagsB.fourth = 0;
    unit->flagsB.fifth = 0;
    unit->flagsB.last = 0;
}

} /* extern "C" */
