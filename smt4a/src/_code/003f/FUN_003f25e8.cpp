/* NON_MATCHING: armcc predicates the form-pointer load and null test behind the first two guards; retail branches before loading the form pointer. */
#include "common.h"

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
ScriptBattleUnit* btlUnitGet(u32 unitId);
s32 FUN_0019acdc(u16 formId, u32 flags);

// Test whether the script's battle unit resolves to form category three.
s32 FUN_003f25e8()
{
    ScriptBattleUnit* unit = btlUnitGet(g_btlScriptUnit);
    if (unit != NULL && unit->data != NULL) {
        ScriptUnitForm* form = unit->data->form;
        if (form != NULL) {
            return FUN_0019acdc(form->id, 0) == 3;
        }
    }
    return 0;
}
}
