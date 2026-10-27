#include "common.h"

extern "C" {

void callbackStateClear();
void FUN_002c5d54(void *context, void (*callback)(), u32 size, s32 priority);

/* Registers the context's callback and work area. */
void contextRegisterCallback(void *context)
{
    FUN_002c5d54(context, callbackStateClear, 4, 1024);
}

}
