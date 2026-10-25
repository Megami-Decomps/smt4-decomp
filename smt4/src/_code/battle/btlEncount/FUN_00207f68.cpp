/* NON_MATCHING: only the final battle-flag load/OR/store uses r0 instead of retail r1. */
#include "battle/btlEncount.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "sys/Task.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

/* The encounter allocation has an additional unrecovered word beyond its shared prefix. */
struct BattleEncounterAllocation {
    BtlEncount encounter;
    u32 unk10;
};

extern "C" {
extern BtlEncount *g_btlEncount;
void battleQueryEncounter(void *);
void btlEncountDestroy(void *);
u32 taskCreateDraw(const char *, s32, s32, s32, TaskFunc, TaskFunc, void *, u32);
void asdMemFree(void *);
void gameCounterAddSaturating(s32, s32);
void frameTexApplyMode(s32);

/* Initialize encounter tracking, its update task and the battle's entry records. */
void FUN_00207f68(BtlMainState *battle)
{
    battle->encounter.drawJob = taskCreateDraw("btlEncount Calc", 2, 0, 0, battleQueryEncounter,
                                              btlEncountDestroy, battle, battle->encounter.ownerJob);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlEncount.cpp", 1308);
    BattleEncounterAllocation *allocation = static_cast<BattleEncounterAllocation *>(asdMemAlloc(0x100, 0x100, 0, sizeof(BattleEncounterAllocation), 1));
    BtlEncount *encounter = &allocation->encounter;
    g_btlEncount = encounter;
    encounter->state = 0;
    encounter->flags = 0;
    if (encounter->data != NULL) {
        asdMemFree(encounter->data);
        encounter->data = NULL;
    }
    for (s32 i = 0; i < 50; ++i) {
        battle->encounter.records[i].id = -1;
        battle->encounter.records[i].category = -1;
        battle->encounter.records[i].listedId = -1;
    }
    gameCounterAddSaturating(2, 1);
    if (!battle->encounterControl.blocked && battle->encounter.encounterId >= 0 &&
        !(battle->encounter.flags & 0x2000000) && !(battle->battleFlags & 2) &&
        !(battle->battleFlags & 0x40000000)) {
        frameTexApplyMode(2);
        battle->battleFlags |= 0x40000000;
    }
}
}
