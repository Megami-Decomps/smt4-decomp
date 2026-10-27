#include "common.h"

extern "C" {

struct FUN_003684e0View {
    u8 unk00[0x5c];
    u8 member[1];
};

void *FUN_003684e0(FUN_003684e0View *self)
{
    return self->member;
}

} /* extern "C" */
