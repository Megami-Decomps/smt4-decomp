/* NON_MATCHING: suppression-mask loads and call-stack argument registers differ from retail. */
#include "battle/btlMain.h"
#include "battle/btlHelp.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
BtlMainStateA* btlGetMainState(void);
s32 FUN_003eaf20(BtlMainStateA* battle);
u32 FUN_00200a68(u32 kind, u32 flags, u32 object, u32 command,
                 s32 mode, u32 option, s32 category, u32 resource);

// Issue a targeted resource request unless the help state suppresses new requests.
u32 FUN_004c8cb0(u32 object, s32 index, u32 option)
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
        return FUN_00200a68(1, 0, object, command, FUN_003eaf20(battle), option, index, 0);
    }
    return FUN_00200a68(0, 0, object, command, 0, option, -1, 0);
}
}
