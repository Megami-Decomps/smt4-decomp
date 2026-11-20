#include "common.h"

extern "C" {

extern u32 g_bssStart[];

/* Clears the linker-defined zero-initialized region before constructors run. */
void nninitRegion(void)
{
    u32 *word = g_bssStart;
    u32 *end = (u32 *)0x4EFE34;
    while (word < end) {
        *word++ = 0;
    }
}

} /* extern "C" */
