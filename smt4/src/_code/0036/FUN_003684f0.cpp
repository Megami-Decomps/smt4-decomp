#include "common.h"

extern "C" {

struct FUN_003684f0View {
    u8 unk00[0x1c];
    u8 member[1];
};

void *FUN_003684f0(FUN_003684f0View *self)
{
    return self->member;
}

} /* extern "C" */
