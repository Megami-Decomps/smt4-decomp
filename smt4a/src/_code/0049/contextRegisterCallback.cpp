#include "common.h"

extern "C" {

void aocItemRefClear();
void FUN_002f5018(void *context, void (*callback)(), u32 size, s32 priority);

/* Registers the context's callback and work area. */
void contextRegisterCallback(void *context)
{
    FUN_002f5018(context, aocItemRefClear, 4, 1024);
}

}
