#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W5_W5Match7_ScriptUnit.h"
#include "battle/BtlMainAccess.h"

extern "C" {
BtlEntry *btlMainFindEntryByListedId(BtlMainState *battle, u32 id);
void FUN_00250720(BtlMainState *battle);
void FUN_002551ac(s32 side, ScriptUnit *source, BtlActionRecord *action, s32 kind,
                 s32 amount, s32 first, s32 second, s32 hp, s32 maxHp,
                 s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14,
                 s32 a15, s32 a16, s32 a17, s32 a18, s32 a19, s32 a20,
                 s32 a21, s32 a22, s32 a23, s32 a24);
void FUN_002505c0(s32 side, ScriptUnit *source, u32 message,
                 s32 value, s32 option, s32 extra, s32 flags);

// Apply scripted damage to one listed target and display the standard damage message.
u32 scrBattleDamageListedTarget(void)
{
    u32 targetId = scrGetArg(0);
    s32 amount = scrGetArg(1);
    ScriptUnit *source = reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
    BtlEntry *target = btlMainFindEntryByListedId(btlGetMainState(), targetId);
    FUN_00250720(btlGetMainState());
    BtlActionRecord *action = &btlGetMainState()->actions[target->members.ids[0]];
    FUN_002551ac(0, source, action, 0, amount, -1, -1, target->hp, target->maxHp,
                 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1);
    FUN_002505c0(0, source, 0x1000185, 0, 0, 0, 0);
    return 1;
}
}
