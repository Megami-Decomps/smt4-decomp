#pragma once
#include "common.h"

/* Functions in the 0x001b0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct BitSet;
struct Bytes6;
extern "C" {

u8 bitSetTest(BitSet *set, u32 index);

void ARM_common_memset4_6(Bytes6 *dest, u32 value);

} /* extern "C" */
