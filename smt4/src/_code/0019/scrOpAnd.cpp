#include "shard/ScriptStep.h"

extern "C" {

int scrFloatOp(ScriptStep *script, int command);

/* Script command: runs sub-command 5 and advances to the next step. */
s32 scrOpAnd(ScriptStep *script)
{
    scrFloatOp(script, 5);
    script->step = script->step + 1;
    return 1;
}

} /* extern "C" */
