#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" u32 FUN_001ba3d4(u16 id);

/* Script command: when the argument is set, finds the battle member with the highest value (the first one on a tie) and returns its id; 0 when none. */
extern "C" u32 scrBattleFindHighestValueMember(void)
{
    s32 enabled = scrGetArg(0);
    u16 bestValue = 0;
    u16 bestId = 0;
    BtlMainStateExtA *battle = btlGetMainStateExt();
    if (enabled != 0) {
        for (std::vector<u16>::iterator member = battle->members.begin(); member != battle->members.end(); ++member) {
            u16 id = *member;
            u16 value = FUN_001ba3d4(id);
            if (value > bestValue) {
                bestValue = value;
                bestId = id;
            }
        }
    }
    scrSetResult(bestId);
    return 1;
}
