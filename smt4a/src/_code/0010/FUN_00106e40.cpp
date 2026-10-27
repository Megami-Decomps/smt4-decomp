#include "common.h"

extern "C" {

struct FUN_00106e40View {
    u32 f00;
    u8 f04;
    u8 f05;
};

void FUN_00106e40(FUN_00106e40View *self)
{
    self->f00 = 0;
    self->f04 = 0;
    self->f05 = 0;
}

} /* extern "C" */
