#include "common.h"
extern "C" {
s32 FUN_00201e34(int value, u32 options);
/* Forwards to the shared implementation. */
s32 FUN_0047ecc8(int value, u32 options) { return FUN_00201e34(value, options); }
}
