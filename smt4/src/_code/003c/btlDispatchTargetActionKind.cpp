#include "battle/BtlMainAccess.h"
#include "shard/W4_Match6_BtlScript.h"

extern "C" {
u32 btlSubmitAction(u32 command, s32 target, u32 argument);

u32 btlDispatchTargetActionKind(s32 target, s32 kind, u32 argument)
{
    BtlMainState* battle = btlGetMainState();
    if ((battle->battleFlags & 0x40) != 0) {
        return 0;
    }
    if ((battle->battleFlags & 0x100) != 0) {
        return 0;
    }
    u32 command = 0;
    if (kind == 1) {
        command = 0x1a;
    } else if (kind == 2) {
        command = 0x1b;
    }
    return btlSubmitAction(command, target, argument);
}
}
