/* NON_MATCHING: byte-stream header checks fold source advances differently from retail. */
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
    u32 counts = (source[0] << 24) | (source[1] << 16) | (source[2] << 8) | source[3];
    command->first = (counts >> 8) + 1;
    command->second = (counts & 0xff) + 1;
    return 6;
}
