/* NON_MATCHING: instruction selection/order differs: retail cmp r0, r1; compiler sub r1, r1, r0. */
#include "common.h"

extern "C" {

extern u32 DAT_00477000[];

/* Clears the linker-defined zero-initialized region before constructors run. */
void nninitRegion(void)
{
    u32 *word = DAT_00477000;
    u32 *end = (u32 *)0x4EFE34;
    while (word < end) {
        *word++ = 0;
    }
}

} /* extern "C" */
