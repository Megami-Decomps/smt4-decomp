#include "shard/ScriptStep.h"

extern "C" {

int scrFloatOp(ScriptStep *script, int command);

/* Script command: runs sub-command 1 and advances to the next step. */
s32 scrOpSub(ScriptStep *script)
{
    scrFloatOp(script, 1);
    script->step = script->step + 1;
    return 1;
}

} /* extern "C" */
