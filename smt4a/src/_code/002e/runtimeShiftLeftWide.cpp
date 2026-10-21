/* NON_MATCHING: compiler calls __aeabi_llsl instead of reproducing this runtime helper body. */
#include "common.h"
extern "C" {
/* Shift a full sixty-four-bit value left. */
u64 runtimeShiftLeftWide(u64 value,u32 shift) { return value<<shift; }
}
