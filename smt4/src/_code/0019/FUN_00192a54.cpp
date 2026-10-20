#include "shard/ScriptStep.h"

extern "C" {

int FUN_002a0d4c(ScriptStep *script, int command);

/* Script command: runs sub-command 1 and advances to the next step. */
s32 FUN_00192a54(ScriptStep *script)
{
    FUN_002a0d4c(script, 1);
    script->step = script->step + 1;
    return 1;
}

} /* extern "C" */
