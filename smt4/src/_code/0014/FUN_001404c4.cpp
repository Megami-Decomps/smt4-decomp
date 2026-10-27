#include "common.h"

extern "C" {

struct FUN_001404c4View {
    u8 unk00[0x4];
    u32 f04;
    u8 f08;
    u8 f09;
};

void FUN_001404c4(FUN_001404c4View *self)
{
    self->f04 = 0;
    self->f08 = 47;
    self->f09 = 0;
}

} /* extern "C" */
