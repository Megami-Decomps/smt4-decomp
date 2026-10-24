#include "common.h"

/* The step's output record: a kind byte at 8 and a detail field at 10. */
struct StepOutput00434544 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 kind;
    /* 0x09 */ u8 unk09;
    /* 0x0a */ union {
        u8 byte;
        u16 half;
    } detail;
};

struct Sequence00434544 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 position;
};

extern "C" {

/* Sequence step: emits kind 0 with detail 13 and advances. */
s32 FUN_00434544(Sequence00434544 *sequence, StepOutput00434544 **output)
{
    (*output)->kind = 0;
    (*output)->detail.half = 13;
    sequence->position++;
    return 0;
}

} /* extern "C" */
