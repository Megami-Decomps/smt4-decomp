/* NON_MATCHING: retail keeps the zero in r2 (r1 is live or reserved by the real signature); the build uses r1. */
#include "common.h"

extern "C" {

struct FUN_00361934View {
    u32 f00;
    u32 f04;
    u32 f08;
    u8 f0c;
    u8 f0d;
    u8 unk0e[0x2];
    u16 f10;
    u16 f12;
    u16 f14;
    u16 f16;
};

void FUN_00361934(FUN_00361934View *self)
{
    self->f00 = 0;
    self->f04 = 0;
    self->f08 = 0;
    self->f0c = 0;
    self->f0d = 0;
    self->f10 = 0;
    self->f12 = 0;
    self->f14 = 0;
    self->f16 = 0;
}

} /* extern "C" */
