/* NON_MATCHING: compiler uses different register allocation, frame setup or instruction scheduling than retail. */
#include "common.h"
extern "C" {
/* Invokes the callback for each element and returns the original iterator. */
void *FUN_002f5020(u8 *begin, void (*visit)(void *), u32 stride, u32 count) {
    u8 *current = begin;
    if (visit != NULL)
        while (count-- != 0) {
            visit(current);
            current += stride;
        }
    return begin;
}
}
