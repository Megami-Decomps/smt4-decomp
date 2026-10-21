#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern s32 scrPopInt(ScriptBranchContext *context);

/* Stores the script branch index after popping an integer. */
s32 FUN_0019291c(ScriptBranchContext *context)
{
    if (context->enabled == 0) {
        return 0;
    }
    context->branch = scrPopInt(context) + 1;
    return 1;
}

} /* extern "C" */
