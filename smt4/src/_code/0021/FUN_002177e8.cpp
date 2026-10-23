/* NON_MATCHING: damage-call stack arguments use STM/scalar stores instead of retail's STRD pairs, changing constant registers. */
#include "battle/btlAction.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "shard/W5_W5Match7_ScriptUnit.h"

extern "C" {
BtlMainState *btlGetMainState(void);
BtlEntry *btlMainFindEntryByListedId(BtlMainState *battle, s32 id);
void FUN_00250720(BtlMainState *battle);
void FUN_002551ac(s32 channel, ScriptUnit *unit, BtlActionRecord *record, s32 kind,
                  s32 maximum, s32 source, s32 target, s32 current, s32 previousMaximum,
                  s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, s32 a15, s32 a16,
                  s32 a17, s32 a18, s32 a19, s32 a20, s32 a21, s32 a22,
                  s32 a23, s32 a24, s32 a25);
void FUN_00250680(s32 action, ScriptUnit *unit, BtlActionRecord *record, s32 flags);
BtlEquip *gameGetUnitRecord(s32 index);
void objectFlagSetBit(BtlEquip *record, u32 bit);
void FUN_003ddc70(s32 channel, ScriptUnit *unit, s32 action, f32 duration);
void FUN_002505c0(s32 channel, ScriptUnit *unit, u32 resource, s32 a4, s32 a5, s32 a6, s32 a7);
void FUN_003ddbcc(s32 channel, ScriptUnit *unit, s32 a3, s32 a4, s32 a5, s32 frames, s32 a7);

// Defeat a battle or reserve unit and queue its sound and visual action sequence.
u32 FUN_002177e8(void)
{
    s32 id = scrGetArg(0);
    ScriptUnit *unit = btlUnitGet(g_btlScriptUnit);
    if (id < BTL_ENTRY_COUNT) {
        BtlActionRecord *record = &btlGetMainState()->actions.records[id];
        BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), id);
        FUN_00250720(btlGetMainState());
        FUN_002551ac(0, unit, record, 0, entry->maxHp, -1, -1, entry->value,
                      entry->maxHp, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1);
        FUN_00250680(0x19, unit, record, 0);
    } else {
        BtlEquip *record = gameGetUnitRecord(id - BTL_ENTRY_COUNT);
        record->hp = 0;
        objectFlagSetBit(record, 1);
        FUN_003ddc70(0, unit, 15, 8.0f);
    }
    FUN_002505c0(0, unit, 0x1000178, 0, 0, 0, 0);
    FUN_003ddbcc(0, unit, 0, 1, 2, 180, 3);
    return 1;
}
}
