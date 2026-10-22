#include "common.h"

extern "C" {

extern void FUN_001e5e78(u32 mode);

/* Registers the default map-interface state and reports success. */
s32 mapRegisterDefaultInterface(void)
{
    FUN_001e5e78(0);
    return 0;
}

} /* extern "C" */
