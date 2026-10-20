#include "shard/ScriptStep.h"

extern "C" {

int scrFloatOp(ScriptStep *script, int command);

/* Script command: runs sub-command 4 and advances to the next step. */
s32 scrOpOr(ScriptStep *script)
{
    scrFloatOp(script, 4);
    script->step = script->step + 1;
    return 1;
}

} /* extern "C" */
