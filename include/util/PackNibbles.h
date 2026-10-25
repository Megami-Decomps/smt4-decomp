#pragma once
#include "common.h"

extern "C" {

/* Packs two nibble values and a byte into one word. */
u32 packNibblesAndByte(s32 a, s32 b, u32 byte);

} /* extern "C" */
