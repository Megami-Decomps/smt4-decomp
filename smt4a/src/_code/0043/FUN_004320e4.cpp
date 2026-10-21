#include "common.h"
extern "C" {
s32 FUN_0016f160(u32 mask);
/* Converts a valid channel index to a single-bit request. */
s32 FUN_004320e4(u32 index) { return index < 4 ? FUN_0016f160(1u << index) : (s32)0xD8E06BED; }
}
