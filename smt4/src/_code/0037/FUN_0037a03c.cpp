#include "common.h"

extern "C" {

struct FUN_0037a03cView {
    u8 unk00[0xf4];
    u8 member[1];
};

void *FUN_0037a03c(FUN_0037a03cView *self)
{
    return self->member;
}

} /* extern "C" */
