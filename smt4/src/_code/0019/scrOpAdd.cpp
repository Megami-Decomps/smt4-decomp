#include "shard/ScriptStep.h"

extern "C" {

int scrFloatOp(ScriptStep *script, int command);

/* Script command: runs sub-command 0 and advances to the next step. */
s32 scrOpAdd(ScriptStep *script)
{
    scrFloatOp(script, 0);
    script->step = script->step + 1;
    return 1;
}

} /* extern "C" */
