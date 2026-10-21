#include "common.h"

extern "C" {

void FUN_00494514();
void FUN_002f5018(void *context, void (*callback)(), u32 size, s32 priority);

/* Registers the context's callback and work area. */
void FUN_00493e80(void *context)
{
    FUN_002f5018(context, FUN_00494514, 4, 1024);
}

}
