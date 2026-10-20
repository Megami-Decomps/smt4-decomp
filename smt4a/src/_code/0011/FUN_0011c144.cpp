#include "common.h"

extern "C" {

void FUN_0011c290(void *object);

typedef struct Context {
    /* 0x00 */ u8 unk00[0x7C];
    /* 0x7C */ u32 current;
} Context;

/* Runs FUN_0011c290 with `current` set to `value` for the duration of the call. */
void FUN_0011c144(Context *context, u32 unused, u32 value)
{
    context->current = value;
    FUN_0011c290(context);
    context->current = 0;
}

} /* extern "C" */
