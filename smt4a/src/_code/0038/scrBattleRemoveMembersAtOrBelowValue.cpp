#include "battle/BattleMemberList.h"

extern "C" u32 FUN_001ba3d4(u16 id);

/* Script command: when the first argument is set, removes the battle members whose value is not above the second argument. */
extern "C" u32 scrBattleRemoveMembersAtOrBelowValue(void)
{
    s32 enabled = scrGetArg(0);
    s32 limit = scrGetArg(1);
    BattleMemberList *battle = btlGetMainState();
    if (enabled != 0) {
        for (std::vector<u16>::iterator member = battle->members.begin(); member != battle->members.end();) {
            if (limit < (s32)(FUN_001ba3d4(*member) & 0xffff)) {
                ++member;
            } else {
                member = battle->members.erase(member);
            }
        }
    }
    return 1;
}
