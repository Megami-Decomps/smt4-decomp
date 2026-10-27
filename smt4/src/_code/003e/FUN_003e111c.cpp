#include "common.h"

extern "C" {

struct FUN_003e111cView {
    u8 unk00[0x4c];
    u8 member[1];
};

void *FUN_003e111c(FUN_003e111cView *self)
{
    return self->member;
}

} /* extern "C" */
