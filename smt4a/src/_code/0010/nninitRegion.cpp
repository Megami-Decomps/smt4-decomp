#include "common.h"

extern "C" {

extern u32 DAT_005c5000[];

/* Clears the linker-defined zero-initialized region before constructors run. */
void nninitRegion(void)
{
    u32 *word = DAT_005c5000;
    u32 *end = (u32 *)0x64C11C;
    while (word < end) {
        *word++ = 0;
    }
}

} /* extern "C" */
