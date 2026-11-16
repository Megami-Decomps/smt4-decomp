#ifndef CLASSES_SELECTION_COMMAND_DECODE_H
#define CLASSES_SELECTION_COMMAND_DECODE_H

#include "classes/SelectionState.h"

/* Byte-stream readers of the selection command decoders. Each returns the bytes it consumed, or -1
 * when the stream is too short. */

/* Reads one byte into *value. */
static __inline s32 selectionReadByte(u32 *value, const u8 *source, u32 size)
{
    if (size == 0)
        return -1;
    *value = *source;
    return 1;
}

/* Reads the command header: the selector byte, then the mode byte. */
static __inline s32 selectionReadHeader(SelectionCommand *command, const u8 *source, u32 size)
{
    s32 read = selectionReadByte(&command->selector, source, size);
    if (read < 0)
        return -1;
    source += read;
    size -= read;
    read = selectionReadByte(&command->mode, source, size);
    if (read < 0)
        return -1;
    return 2;
}

#endif
