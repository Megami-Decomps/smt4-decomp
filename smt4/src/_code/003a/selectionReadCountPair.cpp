/* NON_MATCHING: the count word decode (rev/bic/orr) now matches; retail advances the source with separate `add` instructions (p+1 kept in ip, p+2 later) where armcc folds the advance into a writeback load and compares size directly. */
#include "classes/SelectionState.h"

/* Decode the selector and a packed 24-bit count/8-bit count pair. */
extern "C" s32 selectionReadCountPair(SelectionCommand *command, const u8 *source, u32 size)
{
    if (size == 0)
        return -1;
    command->selector = source[0];
    if (size - 1 == 0)
        return -1;
    command->mode = source[1];
    if (size - 2 < 4)
        return -1;
    source += 2;
    u32 counts = (__rev(*reinterpret_cast<const u32 *>(source)) & ~0xffu) | source[3];
    command->first = (counts >> 8) + 1;
    command->second = (counts & 0xff) + 1;
    return 6;
}
