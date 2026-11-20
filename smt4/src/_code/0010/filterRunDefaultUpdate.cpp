#include "common.h"

extern "C" void filterApplyDefaultHook(s32 mode);

/* Reset the common subsystem to mode zero. */
extern "C" void filterRunDefaultUpdate(void *)
{
    filterApplyDefaultHook(0);
}
