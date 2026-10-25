#include "battle/BattleUnitSlot.h"
#include "script/ScriptArgs.h"

struct Obj2dbef4Data {
    u8 unk00[0xe8];
    s16 value;
};

struct Obj2dbef4Unit {
    u8 unk00[0x28];
    Obj2dbef4Data *data;
};

extern "C" {
extern u32 g_btlScriptUnit;

/* Script command: sets the result to a halfword of the script unit's data record. */
s32 FUN_002dbef4(void)
{
    scrSetResult(reinterpret_cast<Obj2dbef4Unit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)))->data->value);
    return 1;
}
}
