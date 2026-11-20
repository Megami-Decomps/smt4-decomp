#include "common.h"

extern "C" {

extern void asdMemInitializeSystem(u32 reserveSize, u32 allocatorSize, u32 extraReserve);

/* Starts the memory module with the default reservations. */
void asdMemInitializeDefaults(void)
{
    asdMemInitializeSystem(0x2f00000, 0x100000, 0x100000);
}

} /* extern "C" */
