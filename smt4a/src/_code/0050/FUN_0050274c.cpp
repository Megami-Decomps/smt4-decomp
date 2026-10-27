#include "common.h"

extern "C" {

struct FUN_0050274cView {
    u8 unk00[0x4c];
    u8 member[1];
};

void *FUN_0050274c(FUN_0050274cView *self)
{
    return self->member;
}

} /* extern "C" */
