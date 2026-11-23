/* NON_MATCHING: retail narrows the table index to a byte (`and r2, r1, #255`) while it compares the counter signed
 * and addresses the destination from the full counter; written plainly the loop is unrolled by armcc. A single-use
 * `u8` copy of the counter reproduces retail, but nothing else shows a byte-wide index (review w84: steering). */
#include "ui/FloatTableLookup.h"

/* Copies the two default animation steps into the caller's table. */
extern "C" void copyDefaultAnimationSteps(f32 *values)
{
    for (s32 i = 0; i < 2; i++) {
        values[i] = g_defaultAnimationSteps[i];
    }
}
