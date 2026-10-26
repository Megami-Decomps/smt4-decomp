/* NON_MATCHING: canonical accessor and form guards match; result normalization branches to the shared zero return instead of MOVNE. */
#include "battle/BattleUnitSlot.h"
#include "code/Code0019.h"

struct ScriptUnitForm {
    u8 unk000[0x12c]; // 0x000
    u16 id;            // 0x12c
};

struct ScriptUnitData {
    u8 unk000[0x400]; // 0x000
    ScriptUnitForm* form; // 0x400
};

struct ScriptBattleUnit {
    u8 unk00[0x20]; // 0x00
    ScriptUnitData* data; // 0x20
};

extern "C" {
extern u32 g_btlScriptUnit;

// Test whether the script's battle unit resolves to form category three.
s32 FUN_003f25e8()
{
    ScriptBattleUnit* unit = reinterpret_cast<ScriptBattleUnit *>(
        btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    if (unit == NULL || unit->data == NULL)
        return 0;
    ScriptUnitForm* form = unit->data->form;
    if (form == NULL)
        return 0;
    return FUN_0019acdc(form->id, 0) == 3;
}
}
