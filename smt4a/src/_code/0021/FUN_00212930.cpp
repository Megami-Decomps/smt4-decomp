#include "common.h"
#include "script/ScriptCounter.h"

extern "C" {

/* Script opcode: steps the context's counter by one. */
u32 FUN_00212930(ScriptCounter *context)
{
    context->counter++;
    return 1;
}

} /* extern "C" */
