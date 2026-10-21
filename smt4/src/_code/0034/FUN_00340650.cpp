#include "common.h"

extern "C" {

void FUN_00342038();
void FUN_002c5d54(void *context, void (*callback)(), u32 size, s32 priority);

/* Registers the context's callback and work area. */
void FUN_00340650(void *context)
{
    FUN_002c5d54(context, FUN_00342038, 40, 16);
}

}
