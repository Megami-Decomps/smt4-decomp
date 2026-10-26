#include "battle/BattleUnitSlot.h"
#include "script/ScriptArgs.h"

namespace { struct Stats { u8 padding[0x152]; u16 values[1]; }; struct Unit { u8 padding[0x28]; Stats *stats; }; }

extern "C" {
extern u32 g_btlScriptUnit;
u32 scrCommTestUnitPackedValue(void)
{
    u32 index = scrGetArg(0);
    Unit *unit = reinterpret_cast<Unit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    // The per-slot values start at halfword 0xa9 (byte 0x152) of the stats block.
    const u16 *words = reinterpret_cast<const u16 *>(unit->stats);
    scrSetResult((words[0xa9 + index] >> 10) == 1);
    return 1;
}
}
