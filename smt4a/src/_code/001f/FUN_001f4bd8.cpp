#include "common.h"
#include "script/ScriptCounter.h"

extern "C" {

void scrFloatOp(ScriptCounter *context, s32 op);

/* Script opcode: runs float operation 9, then steps the counter by one. */
u32 FUN_001f4bd8(ScriptCounter *context)
{
    scrFloatOp(context, 9);
    context->counter++;
    return 1;
}

} /* extern "C" */
