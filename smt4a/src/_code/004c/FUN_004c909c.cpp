#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlHelp.h"

struct BattleHelpMasksView {
    u8 unk00[0x20];
    u64 blockedStates;      // 0x20
    u64 blockedTransitions; // 0x28
};

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
u32 FUN_00200a68(s32, s32, u32, u32, s32, u32, u32, s32);
u32 FUN_004c8e30(u32, s32, u32);

// The help globals' blocking masks.
static __inline const BattleHelpMasksView *helpMasks(void)
{
    return reinterpret_cast<const BattleHelpMasksView *>(&g_btlHelp);
}

// Dispatch a selected help request or use the immediate path when no mode is specified.
u32 FUN_004c909c(u32 request, s32 mode, s32 index, u32 argument)
{
    BtlMainStateA *state = btlGetMainState();
    if ((helpMasks()->blockedStates & state->stateFlags64.bits) ||
        (helpMasks()->blockedTransitions & state->stateFlags64.bits))
        return 0;
    if (mode != 0) {
        u32 context = state->helpMessages.context;
        return FUN_00200a68(4, static_cast<s16>(index), request, context, mode, argument, 7, 0);
    }
    return FUN_004c8e30(request, 0, argument);
}
}
