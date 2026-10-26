#include "nn/Result.h"
#include "common.h"

/* std::min as retail's library built it: it hands back one of the two references. */
static const u32 &minimum(const u32 &first, const u32 &second)
{
    return second < first ? second : first;
}

extern "C" {
void *asdOperatorNewE(u32 size, u16 *destination);
void asdOperatorDeleteB(void *memory);
s32 FUN_004315a8(u16 *output, u32 *length, const void *source, s32 *position);
void FUN_002e98ea(u16 *output, const u16 *input, u32 count);

/* Decode into temporary wide storage, copy the bounded result and always terminate the destination. */
s32 textConvertToBoundedWide(u32 unused, u16 *destination, u32 capacity, const void *source)
{
    u32 length;
    s32 position = -1;
    s32 result = FUN_004315a8(NULL, &length, source, &position);
    if (nnResultIsFailure(result)) {
        return result;
    }
    u16 *temporary = static_cast<u16 *>(asdOperatorNewE((length + 1) * 2, destination));
    result = FUN_004315a8(temporary, &length, source, &position);
    if ((s32)(result & 0x80000000) < 0) {
        asdOperatorDeleteB(temporary);
        return result;
    }
    temporary[length] = 0;
    FUN_002e98ea(destination, temporary, minimum(length + 1, capacity));
    destination[capacity - 1] = 0;
    result = 0;
    asdOperatorDeleteB(temporary);
    return result;
}
}
