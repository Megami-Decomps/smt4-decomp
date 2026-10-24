#include "common.h"

/* The step's output record: a kind byte at 8 and a detail field at 10. */
struct StepOutput00434a70 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 kind;
    /* 0x09 */ u8 unk09;
    /* 0x0a */ u16 detail;
};

struct Sequence00434a70 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 position;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 remaining;
};

extern "C" {

/* Sequence step: emits kind 1 when nothing remains, otherwise kind 0 with detail 124; advances. */
s32 FUN_00434a70(Sequence00434a70 *sequence, StepOutput00434a70 **output)
{
    if (sequence->remaining <= 0) {
        (*output)->kind = 1;
    } else {
        (*output)->kind = 0;
        (*output)->detail = 124;
    }
    sequence->position++;
    return 0;
}

} /* extern "C" */
