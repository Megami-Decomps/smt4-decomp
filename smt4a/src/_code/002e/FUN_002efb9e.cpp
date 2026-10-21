/* NON_MATCHING: compiler uses bics and omits the frame instead of retail's complement/and sequence. */
#include "common.h"
struct Flags { u8 unk00[0x10]; u32 low, high; };
/* Tests that the requested mask is contained in the stored flags. */
extern "C" s32 FUN_002efb9e(const Flags *flags, u32 unused, u32 low, u32 high) {
    if (((~flags->low & low) | (~flags->high & high)) == 0) return 1;
    return 0;
}
