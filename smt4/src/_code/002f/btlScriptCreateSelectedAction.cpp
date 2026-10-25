#include "battle/btlUnit.h"
#include "battle/BattleUnitSlot.h"

extern "C" {
extern u32 g_btlScriptUnit;
u32 scrGetArg(u32 index);
BtlMainState* btlGetMainState(void);
void FUN_00250720(BtlMainState* battle);
u32 FUN_002551ac(s32 kind, BtlUnit* actor, BtlActionRecord* actions, s32 mode,
                 s32 first, u32 argument, s32 second, s32 selection, s32 variant,
                 u32, u32, u32, u32, u32, u32, u32, u32,
                 u32, u32, u32, u32, u32, u32, u32, u32);
void FUN_002505c0(s32 actor, u32 options, void* key, s32 mode,
                  s32 checkDuplicates, s32 parameter, s32 first);

u32 btlScriptCreateSelectedAction(void)
{
    // The selected skill pointer is beyond the shared IV battle-state prefix.
    struct SelectionView {
        u8 unk0000[0x1FC0];
        BtlSkill* skill;
    };
    typedef char SelectionPointerOffset[
        offsetof(SelectionView, skill) == 0x1FC0 ? 1 : -1];
    u32 argument = scrGetArg(0);
    BtlUnit* actor = reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));
    FUN_00250720(btlGetMainState());
    s16 variant = reinterpret_cast<SelectionView*>(btlGetMainState())->skill->unk1B6;
    s16 selection = reinterpret_cast<SelectionView*>(btlGetMainState())->skill->unk1B4;
    FUN_002551ac(0, actor, btlGetMainState()->actions, 0, -1, argument, -1,
                  selection, variant, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1);
    FUN_002505c0(0, (u32)actor, reinterpret_cast<void*>(0x10001B5), 0, 0, 0, 0);
    return 1;
}
}
