#include "common.h"
extern "C" {
void FUN_001fef70(u16 *output,u32 first,u32 second);
/* Extract the upper six-bit category from the generated packed value. */
u32 randomGetUpperSixBits(u32 first,u32 second) { u16 value; FUN_001fef70(&value,first,second); return value>>10; }
}
