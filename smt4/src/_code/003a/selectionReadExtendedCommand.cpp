/* NON_MATCHING: byte-stream header checks fold source advances differently from retail. */
#include "classes/SelectionState.h"

static inline u16 readBigEndian16(const u8 *source)
{
    return (source[0] << 8) | source[1];
}

/* Decode a selection command with four halfword and two byte parameters. */
extern "C" s32 selectionReadExtendedCommand(SelectionCommand *command, const u8 *source, u32 size)
{
    if (size == 0)
        return -1;
    command->selector = source[0];
    if (size - 1 == 0)
        return -1;
    command->mode = source[1];
    if (size - 2 < 10)
        return -1;
    source += 2;
    command->first = readBigEndian16(source);
    command->second = readBigEndian16(source + 2);
    command->third = readBigEndian16(source + 4);
    command->fourth = readBigEndian16(source + 6);
    command->fifth = source[8];
    command->sixth = source[9];
    return 12;
}
