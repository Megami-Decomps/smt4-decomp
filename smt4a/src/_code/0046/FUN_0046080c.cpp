#include "common.h"

extern "C" {

struct FUN_0046080cView {
    u8 unk00[0x128];
    u8 member[1];
};

void *FUN_0046080c(FUN_0046080cView *self)
{
    return self->member;
}

} /* extern "C" */
