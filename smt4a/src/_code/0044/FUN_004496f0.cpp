#include "common.h"

extern "C" {

struct FUN_004496f0View {
    u8 unk00[0x3c];
    u8 member[1];
};

void *FUN_004496f0(FUN_004496f0View *self)
{
    return self->member;
}

} /* extern "C" */
