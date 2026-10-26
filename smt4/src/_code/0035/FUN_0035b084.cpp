#include "common.h"

/* The step's output record: a kind byte at 8 and a detail field at 10. */
struct StepOutput00433d38 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 kind;
    /* 0x09 */ u8 unk09;
    /* 0x0a */ u16 detail;
};

struct Sequence00433d38 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 position;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 remaining;
};

extern "C" {

/* Sequence step: emits kind 13 when nothing remains, otherwise kind 0 with detail 43; advances. */
s32 FUN_0035b084(Sequence00433d38 *sequence, StepOutput00433d38 **output)
{
    if (sequence->remaining <= 0) {
        (*output)->kind = 13;
    } else {
        (*output)->kind = 0;
        (*output)->detail = 43;
    }
    sequence->position++;
    return 0;
}

} /* extern "C" */
