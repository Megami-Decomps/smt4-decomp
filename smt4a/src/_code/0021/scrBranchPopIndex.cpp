#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern s32 FUN_003d2004(ScriptBranchContext *context);

/* Stores the script branch index after popping an integer. */
s32 scrBranchPopIndex(ScriptBranchContext *context)
{
    if (context->enabled == 0) {
        return 0;
    }
    context->branch = FUN_003d2004(context) + 1;
    return 1;
}

} /* extern "C" */
