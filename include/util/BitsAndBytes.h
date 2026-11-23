#pragma once
#include "common.h"

/* Bit, byte and array helpers. */
extern "C" {

u8 byteIsAtLeast100(const u8 *value);

void clearByte(u8 *flag);

u16 computeCountLimit(void);

/* Packs two nibble values and a byte into one word. */
u32 packNibblesAndByte(s32 a, s32 b, u32 byte);

} /* extern "C" */

/* Sets `bits` in a flag word. Retail inlines it (the store follows the preceding byte stores, nothing hoisted): the
 * navigation screens' steps of both games and the battle units use it. */
static __inline void flagsSetBits(u32 *flags, u32 bits)
{
    *flags |= bits;
}

/* Clears `bits` in a flag word (the counterpart of flagsSetBits). */
static __inline void flagsClearBits(u32 *flags, u32 bits)
{
    *flags &= ~bits;
}
