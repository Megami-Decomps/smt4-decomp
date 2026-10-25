#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

/* Script command: removes every battle member with the given id when the first argument is set. */
extern "C" u32 FUN_0035f06c(void)
{
    s32 enabled = scrGetArg(0);
    u32 id = scrGetArg(1);
    BtlMainStateExtA *battle = btlGetMainStateExt();
    if (enabled != 0) {
        for (std::vector<u16>::iterator member = battle->members.begin(); member != battle->members.end();) {
            if (*member == id) {
                member = battle->members.erase(member);
            } else {
                ++member;
            }
        }
    }
    return 1;
}
