#include "shard/ScriptStep.h"

extern "C" {

int scrFloatOp(ScriptStep *script, int command);

/* Script command: runs sub-command 7 and advances to the next step. */
s32 scrOpNotEqual(ScriptStep *script)
{
    scrFloatOp(script, 7);
    script->step = script->step + 1;
    return 1;
}

} /* extern "C" */
