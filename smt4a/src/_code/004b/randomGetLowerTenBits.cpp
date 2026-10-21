#include "common.h"
extern "C" {
void FUN_001fef70(u16 *output,u32 first,u32 second);
/* Extract the low ten-bit identifier from the generated value. */
u32 randomGetLowerTenBits(u32 first,u32 second) { u16 value; FUN_001fef70(&value,first,second); return value & 0x3FF; }
}
