/* NON_MATCHING: compiler omits retail's frame and uses a prechecked loop with r3 for the copied word. */
#include "common.h"
/* Fills words only when a destination exists. */
extern "C" void FUN_0030c59e(u32 *output, u32 count, const u32 *value) {
    for (; count != 0; --count) {
        if (output != NULL) *output = *value;
        ++output;
    }
}
