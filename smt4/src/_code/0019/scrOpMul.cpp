#include "shard/ScriptStep.h"

extern "C" {

int scrFloatOp(ScriptStep *script, int command);

/* Script command: runs sub-command 2 and advances to the next step. */
s32 scrOpMul(ScriptStep *script)
{
    scrFloatOp(script, 2);
    script->step = script->step + 1;
    return 1;
}

} /* extern "C" */
