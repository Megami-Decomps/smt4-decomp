#include "common.h"

extern "C" {

struct FUN_0038066cView {
    u8 unk00[0xf4];
    u8 member[1];
};

void *FUN_0038066c(FUN_0038066cView *self)
{
    return self->member;
}

} /* extern "C" */
