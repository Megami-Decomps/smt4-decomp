/* NON_MATCHING: scheduling only: retail issues `mov r0, #1` (the return value) before the flag load/or/store and keeps the value in r2. */
#include "battle/BattleUnitSlot.h"

extern "C" {

typedef struct BtlMain {
    /* 0x0000 */ u8 unk0000[0x44A0];
    /* 0x44A0 */ u32 flags;
} BtlMain;

extern u32 g_btlScriptUnit;
extern BtlMain *btlGetMainState(void);
extern u32 scrGetArg(u32 index);
extern s32 btlMainFindEntryByListedId(BtlMain *main, u32 id);
extern s32 FUN_00246454(s32 a, u32 unit, s32 entry);

/* Script command: looks up the battle entry with the listed id in argument 0, applies it to the script unit and sets flag 16 of the battle state. */
u32 scrCommBtlSetFlag16AfterEntryLookup(void)
{
    u32 id = scrGetArg(0);
    BtlMain *main = btlGetMainState();
    u32 unit = reinterpret_cast<u32>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));

    FUN_00246454(0, unit, btlMainFindEntryByListedId(main, id));
    main->flags |= 0x10000;
    return 1;
}

} /* extern "C" */
