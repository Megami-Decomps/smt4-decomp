#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"
#include "gamedata/ConsumableRecordA.h"

/* Script command: removes the battle members whose record field differs from the second argument, when the first argument is set. */
extern "C" u32 FUN_0039da34(void)
{
    s32 enabled = scrGetArg(0);
    s32 value = scrGetArg(1);
    BtlMainStateExtA *battle = btlGetMainStateExt();
    if (enabled != 0) {
        for (std::vector<u16>::iterator member = battle->members.begin(); member != battle->members.end();) {
            ConsumableRecordA *record = dataTable8FindRecord(*member);
            if (record->value3C != value) {
                member = battle->members.erase(member);
            } else {
                ++member;
            }
        }
    }
    return 1;
}
