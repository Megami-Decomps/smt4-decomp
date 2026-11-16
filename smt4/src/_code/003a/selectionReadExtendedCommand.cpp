#include "classes/SelectionCommandDecode.h"

static inline u16 readBigEndian16(const u8 *source)
{
    return (source[0] << 8) | source[1];
}

/* Reads the four big-endian halfword and two byte parameters. */
static __inline s32 selectionReadParameters(SelectionCommand *command, const u8 *source, u32 size)
{
    if (size < 10)
        return -1;
    command->first = readBigEndian16(source);
    command->second = readBigEndian16(source + 2);
    command->third = readBigEndian16(source + 4);
    command->fourth = readBigEndian16(source + 6);
    command->fifth = source[8];
    command->sixth = source[9];
    return 10;
}

/* Decode a selection command with four halfword and two byte parameters. */
extern "C" s32 selectionReadExtendedCommand(SelectionCommand *command, const u8 *source, u32 size)
{
    s32 used = selectionReadByte(&command->selector, source, size);
    if (used < 0)
        return -1;
    s32 read = selectionReadByte(&command->mode, source + used, size - used);
    if (read < 0)
        return -1;
    used += read;
    read = selectionReadParameters(command, source + used, size - used);
    if (read < 0)
        return -1;
    return used + read;
}
