#include "common.h"

struct ScriptCounter {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 counter;
};

extern "C" {

/* Script opcode: steps the context's counter by one. */
u32 FUN_00192a40(ScriptCounter *context)
{
    context->counter++;
    return 1;
}

} /* extern "C" */
