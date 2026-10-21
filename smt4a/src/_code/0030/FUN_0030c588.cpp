/* NON_MATCHING: compiler omits retail's frame and uses a prechecked loop with r3 for the copied byte. */
#include "common.h"
/* Fills bytes only when a destination exists. */
extern "C" void FUN_0030c588(u8 *output, u32 count, const u8 *value) {
    for (; count != 0; --count) {
        if (output != NULL) *output = *value;
        ++output;
    }
}
