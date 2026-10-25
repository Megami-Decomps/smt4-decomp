#include "battle/BtlMainAccess.h"
#include "util/FUN_003ee0c0.h"
/* NON_MATCHING: only the scratch register for the hp/maxHp stack store differs (retail add ip, sp, #16; armcc reuses r4). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {

extern u32 g_btlScriptUnit;
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);
u32 btlUnitGet(u32 unit);
u32 FUN_004fc094(s32 a0, u32 unit, s32 a2, BattleRosterRecordA *record, s32 a4, s32 maxHp, s32 a6, u32 a7,
                 u32 hp, u32 maxHp2, s32 a10, u32 a11, s32 a12, s32 a13, s32 a14, s32 a15, s32 a16, s32 a17,
                 s32 a18, s32 a19, s32 a20, s16 a21, s32 a22, s32 a23, s32 a24, s32 a25);
void FUN_004fbc30(s32 kind, u32 unit, BattleRosterRecordA *record, s32 value);

/* Script: shows the HP gauge effect for the script unit's current battle entry. */
u32 FUN_0039e21c(void)
{
    BtlMainStateA *state = btlGetMainState();
    BtlCombatantEntryA *entry = FUN_003eaf20(state);
    if (entry == NULL) {
        return 1;
    }
    BattleRosterRecordA *record = &state->roster[entry->unitIndex];
    u32 unit = btlUnitGet(g_btlScriptUnit);
    FUN_003ee0c0(state);
    FUN_004fc094(0, unit, 0, record, 0, entry->maxHp, -1, -1, entry->hp, entry->maxHp, 0, 0, 1, 0, 0, 0, 0,
                 0, 0, 0, 1, 0, 1, 1, 0, 1);
    FUN_004fbc30(0x19, unit, record, 0);
    return 1;
}

} /* extern "C" */
