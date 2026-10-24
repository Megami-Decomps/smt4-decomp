#include "common.h"

/* The step's output record: a kind byte at 8. */
struct StepOutput00434cb4 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 kind;
};

struct Sequence00434cb4 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 position;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 remaining;
};

extern "C" {

/* Sequence step: emits kind 4, advances and counts one off the remaining steps. */
s32 FUN_00434cb4(Sequence00434cb4 *sequence, StepOutput00434cb4 **output)
{
    (*output)->kind = 4;
    sequence->position++;
    sequence->remaining--;
    return 0;
}

} /* extern "C" */
