/* NON_MATCHING: compiler uses different stack-frame allocation and instruction scheduling. */
#include "common.h"
/* Tests whether a halfword occurs within the counted sequence. */
extern "C" s32 FUN_002e4c0c(const u16 *sequence, u32 count, s32 found, u16 value) {
    while (count-- != 0) {
        if (*sequence++ == value) return found == 0;
    }
    return found;
}
