/* NON_MATCHING: scheduling only: retail issues `mov r0, #1` (the return value) before the flag load/or/store and keeps the value in r2. */
#include "battle/BattleUnitSlot.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {

extern u32 g_btlScriptUnit;
extern s32 btlMainFindEntryByListedId(BtlMainState *main, u32 id);
extern s32 FUN_00246454(s32 a, u32 unit, s32 entry);

/* Script command: looks up the battle entry with the listed id in argument 0, applies it to the script unit and sets flag 16 of the battle state. */
u32 scrCommBtlSetFlag16AfterEntryLookup(void)
{
    u32 id = scrGetArg(0);
    BtlMainStateExt *main = btlGetMainStateExt();
    u32 unit = reinterpret_cast<u32>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));

    FUN_00246454(0, unit, btlMainFindEntryByListedId(main, id));
    main->flags44A0 |= 0x10000;
    return 1;
}

} /* extern "C" */
