/* NON_MATCHING: retail predicates the empty-list case (movcs/strcs) and compares as `cmp start, count` / `cmp remaining, capacity`; built branches and swaps the compare operands (failure test via nnResultIsFailure now matches) */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

struct TextListEntry {
    u32 handleA;       // 0x00
    u32 handleB;       // 0x04
    u8 unk08[0x1C];    // 0x08
    u16 *items;        // 0x24
    u32 itemCount;     // 0x28
};

extern "C" {

s32 FUN_00352098(s32 code, s32 mode, u32 handleA, u32 handleB, u16 *items, u32 count);

/* Reads up to `capacity` u16 items of the list entry starting at `start`; the count read is stored through `outCount`. */
WindowStatusResult FUN_003df0c4(TextListEntry **entry, u32 *outCount, s32 code, u32 capacity, u32 start)
{
    TextListEntry *list = *entry;

    if (start >= list->itemCount) {
        code = 0;
        *outCount = 0;
    } else {
        u32 remaining = list->itemCount - start;

        if (remaining < capacity) {
            capacity = remaining;
        }
        code = FUN_00352098(code, 1, list->handleA, list->handleB, list->items + start, capacity);
        if (!nnResultIsFailure(code)) {
            code = 0;
            *outCount = capacity;
        }
    }
    return WindowStatusResult(code);
}

} /* extern "C" */
