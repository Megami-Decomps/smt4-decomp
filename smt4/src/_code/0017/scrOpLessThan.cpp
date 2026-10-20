#include "shard/ScriptStep.h"

extern "C" {

int scrFloatOp(ScriptStep *script, int command);

/* Script command: runs sub-command 8 and advances to the next step. */
s32 scrOpLessThan(ScriptStep *script)
{
    scrFloatOp(script, 8);
    script->step = script->step + 1;
    return 1;
}

} /* extern "C" */
