/* NON_MATCHING: compiler shrink-wraps the frame and adjusts the cookie address in r0 instead of r1. */
#include "common.h"
#include <stddef.h>
extern "C" {
struct ArrayAllocation { void *allocation; u32 count; u8 elements[1]; };
void memoryDeleteWithCallback(void *allocation);
/* Releases the allocation recorded in the array cookie. */
void asdOperatorDeleteArray(void *elements) {
    if (elements != NULL) {
        ArrayAllocation *header = (ArrayAllocation *)((u8 *)elements - offsetof(ArrayAllocation, elements));
        memoryDeleteWithCallback(header->allocation);
    }
}
}
