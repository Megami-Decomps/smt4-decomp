#include "common.h"

extern "C" {

struct FUN_0037ad70View {
    u8 unk00[0xf4];
    u8 member[1];
};

void *FUN_0037ad70(FUN_0037ad70View *self)
{
    return self->member;
}

} /* extern "C" */
