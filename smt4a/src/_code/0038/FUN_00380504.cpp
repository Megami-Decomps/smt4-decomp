#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {

// Script command: sets the result to whether the battle script flag given by argument 0 is set.
u32 FUN_00380504(void)
{
    u32 index = scrGetArg(0);
    BtlMainStateA *battle = btlGetMainState();
    if (battle->scriptFlags & (1 << index)) {
        scrSetResult(1);
    } else {
        scrSetResult(0);
    }
    return 1;
}
}
