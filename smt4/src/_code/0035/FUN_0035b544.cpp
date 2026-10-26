#include "common.h"

/* The step's output record: a kind byte at 8 and a detail field at 10. */
struct StepOutput004341f8 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 kind;
    /* 0x09 */ u8 unk09;
    /* 0x0a */ union {
        u8 byte;
        u16 half;
    } detail;
};

struct Sequence004341f8 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 position;
};

extern "C" {

/* Sequence step: emits kind 8 with detail 1 and advances. */
s32 FUN_0035b544(Sequence004341f8 *sequence, StepOutput004341f8 **output)
{
    (*output)->kind = 8;
    (*output)->detail.byte = 1;
    sequence->position++;
    return 0;
}

} /* extern "C" */
