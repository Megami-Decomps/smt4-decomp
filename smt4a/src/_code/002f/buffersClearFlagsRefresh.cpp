/* Matches with -O2 (requested): built at a lower optimisation level than the game code. */
#include "common.h"

extern "C" {

typedef struct Buffers {
    u8 unk000[0x28];
    u8 source[0x100]; /* 0x028 */
    u8 copy[0x100];   /* 0x128 */
    u8 flagA;         /* 0x228 */
    u8 flagB;         /* 0x229 */
} Buffers;

extern void __aeabi_memcpy4(void *dst, const void *src, u32 size);

/* Clears both flags and refreshes the copy of the buffer. */
void buffersClearFlagsRefresh(Buffers *buffers)
{
    buffers->flagA = 0;
    buffers->flagB = 0;
    __aeabi_memcpy4(buffers->copy, buffers->source, sizeof(buffers->copy));
}

} /* extern "C" */
