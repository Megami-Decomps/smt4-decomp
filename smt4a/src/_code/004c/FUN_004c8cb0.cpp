/* NON_MATCHING: the first suppression mask's high word loads early, and the two ANDs use different scratch registers. */
#include "battle/BtlMainAccess.h"
#include "battle/btlHelp.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *battle);

/* Issues a targeted resource request unless the help state suppresses new requests. */
u32 FUN_004c8cb0(u32 object, s32 index, u8 option)
{
    BtlMainStateA *battle = btlGetMainState();
    const BtlHelpGlobalsA *help = &g_btlHelp;
    if ((help->blockedStates & battle->stateFlags64.bits) != 0 || (battle->stateFlags64.bits & help->blockedTransitions) != 0) {
        return 0;
    }
    /* This command lies beyond the shared command-message subrecord's recovered end. */
    struct CommandView {
        u8 unk00[0x2278];
        u32 command;
    };
    typedef char CommandViewOffset[offsetof(CommandView, command) == 0x2278 ? 1 : -1];
    u32 command = ((CommandView *)battle)->command;
    if (index >= 0) {
        return (u32)FUN_00200a68(1, 0, object, command,
            btlFindFirstEntryMatchingCategoryAndRequiredMask(battle), option, index, 0);
    }
    return (u32)FUN_00200a68(0, 0, object, command, NULL, option, -1, 0);
}
} /* extern "C" */
