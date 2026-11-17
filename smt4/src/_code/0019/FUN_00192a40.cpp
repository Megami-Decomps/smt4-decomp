#include "common.h"
#include "script/ScriptCounter.h"

extern "C" {

/* Script opcode: steps the context's counter by one. */
u32 FUN_00192a40(ScriptCounter *context)
{
    context->counter++;
    return 1;
}

} /* extern "C" */
