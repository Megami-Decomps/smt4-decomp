/* NON_MATCHING: suppression-mask loads and call-stack argument registers differ from retail. */
#include "battle/BtlMainAccess.h"
#include "battle/btlHelp.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);
BtlHelpEntryA *FUN_00200a68(u32 kind, u16 message, u32 object, u32 command,
                         const void *combatant, u8 option, u32 category, u32 resource);

// Issue a targeted resource request unless the help state suppresses new requests.
u32 FUN_004c8cb0(u32 object, s32 index, u8 option)
{
    BtlMainStateA* battle = btlGetMainState();
    if ((((u64)g_btlHelp.blockedStates[0] | ((u64)g_btlHelp.blockedStates[1] << 32)) &
         battle->stateFlags64.bits) != 0 ||
        (battle->stateFlags64.bits &
         ((u64)g_btlHelp.blockedTransitions[0] | ((u64)g_btlHelp.blockedTransitions[1] << 32))) != 0) {
        return 0;
    }
    // This command lies beyond the shared command-message subrecord's recovered end.
    struct CommandView {
        u8 unk00[0x2278];
        u32 command;
    };
    typedef char CommandViewOffset[offsetof(CommandView, command) == 0x2278 ? 1 : -1];
    u32 command = reinterpret_cast<CommandView*>(battle)->command;
    if (index >= 0) {
        return reinterpret_cast<u32>(FUN_00200a68(1, 0, object, command,
            FUN_003eaf20(battle), option, index, 0));
    }
    return reinterpret_cast<u32>(FUN_00200a68(0, 0, object, command, NULL, option, -1, 0));
}
}
