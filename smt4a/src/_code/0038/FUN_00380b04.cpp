/* NON_MATCHING: saved constants and common return blocks differ; retail clear-action inline hint NOPs are absent. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W5_W5Match7_ScriptUnit.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "util/BitsAndBytes_VariantD.h"

extern "C" {
void bitsAt60Set(SlotRecord *, u16);
s32 bitsAt60Test(SlotRecord *, u16);
void FUN_004fcffc(u32, ScriptUnit *, BattleRosterRecordA *, u32);
void FUN_004fdb18(u32, ScriptUnit *, BattleRosterRecordA *, u32, u32);
void FUN_004fb43c(u32, ScriptUnit *, u32, u32, u32, u32, u32);

u32 FUN_00380b04(void)
{
    s32 target = scrGetArg(0);
    u16 status = scrGetArg(1);
    s32 enable = scrGetArg(2);
    ScriptUnit *unit = reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    if (target < 109) {
        BattleRosterRecordA *record = &btlGetMainState()->roster[target];
        if (!enable) {
            FUN_004fcffc(0, unit, record, 1u << status);
            return 1;
        }
        FUN_004fdb18(0, unit, record, 1u << status, 1);
    } else {
        SlotRecord *record = gameGetSlotRecord(target - 109);
        if (!enable) {
            bitsAt60Clear(record, static_cast<u16>(1u << status));
            return 1;
        }
        bitsAt60Set(record, status);
        if (status != 4 && bitsAt60Test(record, 4))
            bitsAt60Clear(record, 0x10);
    }
    FUN_004fb43c(0, unit, 0x100025F, 0, 0, 0, 0);
    return 1;
}
}
