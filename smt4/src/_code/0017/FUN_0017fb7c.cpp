#include "common.h"

struct ScriptCounter {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 counter;
};

extern "C" {

void scrFloatOp(ScriptCounter *context, s32 op);

/* Script opcode: runs float operation 9, then steps the counter by one. */
u32 FUN_0017fb7c(ScriptCounter *context)
{
    scrFloatOp(context, 9);
    context->counter++;
    return 1;
}

} /* extern "C" */
