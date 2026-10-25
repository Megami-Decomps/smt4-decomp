/* NON_MATCHING: register choice only: retail materialises the constant 1 once in r7 (shift base, then reused as the return value `mov r0, r7`); the build uses r1 for the shift and `mov r0, #1` for the returns. */
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {


/* Script command: pushes whether a live unit with id argument 0 has bit argument 1 set in its mask. */
u32 FUN_002fede0(void)
{
    u32 id = scrGetArg(0);
    u32 bit = scrGetArg(1);
    int i;

    for (i = 0; i < 109; i++) {
        BtlUnitEntry *unit = &btlGetMainStateExt()->units[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0
            && unit->groupId == id && (unit->flagMask & (1 << bit)) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
