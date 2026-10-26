#include "common.h"

/* The step's output record: a kind byte at 8 and a detail field at 10. */
struct StepOutput00434368 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 kind;
    /* 0x09 */ u8 unk09;
    /* 0x0a */ union {
        u8 byte;
        u16 half;
    } detail;
};

struct Sequence00434368 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 position;
};

extern "C" {

/* Sequence step: emits kind 17 with detail 2 and advances. */
s32 FUN_0035b6b4(Sequence00434368 *sequence, StepOutput00434368 **output)
{
    (*output)->kind = 17;
    (*output)->detail.byte = 2;
    sequence->position++;
    return 0;
}

} /* extern "C" */
