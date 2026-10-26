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
