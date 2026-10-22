/* NON_MATCHING: std::min is reduced to a value rather than a stack reference; status branches and frame layout differ. */
#include "common.h"
#include <algorithm>

extern "C" {
void *asdOperatorNewE(u32 size, u16 *destination);
void asdOperatorDeleteB(void *memory);
s32 FUN_004315a8(u16 *output, u32 *length, const void *source, s32 *position);
void FUN_002e98ea(u16 *output, const u16 *input, u32 count);

/* Decode into temporary wide storage, copy the bounded result and always terminate the destination. */
s32 FUN_00473c5c(u32 unused, u16 *destination, u32 capacity, const void *source)
{
    u32 length;
    s32 position = -1;
    s32 result = FUN_004315a8(NULL, &length, source, &position);
    if (result < 0) {
        return result;
    }
    u16 *temporary = static_cast<u16 *>(asdOperatorNewE(length * 2 + 2, destination));
    result = FUN_004315a8(temporary, &length, source, &position);
    if (result >= 0) {
        temporary[length] = 0;
        u32 terminatedLength = length + 1;
        FUN_002e98ea(destination, temporary, std::min(terminatedLength, capacity));
        destination[capacity - 1] = 0;
        result = 0;
    }
    asdOperatorDeleteB(temporary);
    return result;
}
}
