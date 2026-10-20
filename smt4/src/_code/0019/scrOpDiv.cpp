#include "shard/ScriptStep.h"

extern "C" {

int scrFloatOp(ScriptStep *script, int command);

/* Script command: runs sub-command 3 and advances to the next step. */
s32 scrOpDiv(ScriptStep *script)
{
    scrFloatOp(script, 3);
    script->step = script->step + 1;
    return 1;
}

} /* extern "C" */
