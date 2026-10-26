/* NON_MATCHING: status removal and feedback branches are laid out in a different order. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/BattleUnit.h"

extern "C" {
extern u32 g_btlScriptUnit;
s32 scrGetArg(s32 index);
u32 FUN_004bf9a0(u32 category);
u32 FUN_004c8340(s32 unit, u32 options, u32 slot, s32 mode, s32 fallback);
void FUN_004fda78(s32 actor, s32 secondary, u32 options, void *target, s32 value, u16 extraId);
u32 FUN_004fdb18(s16 actor, u32 options, BattleRosterRecordA *target, u32 mask, s32 checkStatus);
u32 FUN_004fcffc(s16 actor, u32 options, void *target, u32 mask);
void FUN_004fb43c(s32 actor, u32 options, void *payload, s32 initializeValue,
                 s32 suppressDuplicate, u32 parameterBits, s32 firstId);

// Queue a script-requested status application/removal and its feedback action.
u32 FUN_0038ddb0(void)
{
    u32 status = scrGetArg(0);
    s32 apply = scrGetArg(1);
    s32 checkResistance = scrGetArg(2);
    u32 options = (u32)btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit));
    BtlMainStateA *battle = btlGetMainState();
    if (apply) {
        if (checkResistance &&
            (FUN_004c8340(-1, 0, FUN_004bf9a0(status), 2, -1) & 0x10000)) {
            FUN_004fda78(0, 0, options, battle->roster, 4, 0);
            FUN_004fb43c(0, options, reinterpret_cast<void *>(0x100028c), 0, 1, 0, 0);
        } else {
            FUN_004fdb18(0, options, battle->roster, 1u << status, 1);
            if (status != 4)
                FUN_004fb43c(0, options, reinterpret_cast<void *>(0x100025f), 0, 0, 0, 0);
            else
                FUN_004fb43c(0, options, reinterpret_cast<void *>(0x1000275), 0, 0, 0, 0);
        }
    } else {
        FUN_004fcffc(0, options, battle->roster, 1u << status);
    }
    return 1;
}
}
