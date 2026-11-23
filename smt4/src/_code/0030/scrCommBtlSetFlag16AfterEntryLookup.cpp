#include "battle/BattleUnitSlot.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"
#include "battle/BtlGlobals.h"

extern "C" {

extern u32 g_btlScriptUnit;
extern s32 btlReflectQueueSelectionMarks(s32 a, u32 unit, s32 entry);

/* Script command: looks up the battle entry with the listed id in argument 0, applies it to the script unit and sets flag 16 of the battle state. */
u32 scrCommBtlSetFlag16AfterEntryLookup(void)
{
    u32 id = scrGetArg(0);
    BtlMainState *main = btlGetMainState();
    u32 unit = reinterpret_cast<u32>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));

    btlReflectQueueSelectionMarks(0, unit, reinterpret_cast<s32>(btlMainFindEntryByListedId(main, id)));
    main->battleMask |= 0x10000;
    return 1;
}

} /* extern "C" */
