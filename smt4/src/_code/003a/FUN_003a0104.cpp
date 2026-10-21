#include "common.h"

extern "C" {

void FUN_003a0740();
void FUN_002c5d54(void *context, void (*callback)(), u32 size, s32 priority);

/* Registers the context's callback and work area. */
void FUN_003a0104(void *context)
{
    FUN_002c5d54(context, FUN_003a0740, 4, 1024);
}

}
