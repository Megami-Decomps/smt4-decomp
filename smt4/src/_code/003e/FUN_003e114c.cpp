#include "common.h"

extern "C" {

struct FUN_003e114cView {
    u8 unk00[0x8];
    u8 member[1];
};

void *FUN_003e114c(FUN_003e114cView *self)
{
    return self->member;
}

} /* extern "C" */
