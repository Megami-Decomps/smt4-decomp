#include "battle/BattleUnitSlot.h"
#include "script/ScriptArgs.h"

extern "C" {

typedef struct UnitData {
    /* 0x000 */ u8 unk000[0x126];
    /* 0x126 */ u16 values[1];   /* bits 10..15 hold a kind */
} UnitData;

typedef struct BtlUnit {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ UnitData *data;
} BtlUnit;

extern u32 g_btlScriptUnit;

/* Script command: pushes whether value `arg` of the script unit has kind 3. */
u32 scrCommBtlUnitValueKindIs3(void)
{
    s32 index = scrGetArg(0);
    UnitData *stats = reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)))->data;

    scrSetResult(stats->values[index] >> 10 == 3);
    return 1;
}

} /* extern "C" */
