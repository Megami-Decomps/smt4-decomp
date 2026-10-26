#include "common.h"

struct Sequence00434618 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 position;
    /* 0x14 */ s32 length;
};

struct StepOutput00434618;

extern "C" {

s32 lexerReadHexDigits(Sequence00434618 *sequence, StepOutput00434618 **output, s32 mode);

/* Sequence step: advances; ends with 6 when the sequence reaches its length, otherwise continues in mode 2. */
s32 FUN_0035b964(Sequence00434618 *sequence, StepOutput00434618 **output)
{
    sequence->position++;
    if (sequence->position == sequence->length)
        return 6;
    return lexerReadHexDigits(sequence, output, 2);
}

} /* extern "C" */
