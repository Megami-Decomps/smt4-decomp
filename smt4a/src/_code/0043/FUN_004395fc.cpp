/* NON_MATCHING: armcc copies the two incoming stack arguments through VFP (vldm s16-s17) where retail loads them into r4/r6 with ldm; the rest of the call set-up matches */
/* Forwards a wide-string request (with its length including the terminator) to FUN_004397e4, or fails with the
 * "service unavailable" result when FUN_00426204 reports the service as not ready. */
#include "common.h"

extern "C" {
s32 FUN_00426204(void);
u32 libc_strlen(const u16 *text);
s32 FUN_004397e4(const u16 *text, u32 length, u32 second, u32 third, u32 fourth, u32 fifth, u32 sixth, u32 seventh);

s32 FUN_004395fc(const u16 *text, u32 second, u32 third, u32 fourth, u32 fifth, u32 sixth)
{
    if (FUN_00426204() == 0) {
        return (s32)0xC8A0D018;
    }
    return FUN_004397e4(text, libc_strlen(text) + 1, second, third, fourth, fifth, fifth, sixth);
}
}
