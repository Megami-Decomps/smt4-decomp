#include "common.h"

extern "C" {

struct FUN_003e1114View {
    u8 unk00[0x8c];
    u8 member[1];
};

void *FUN_003e1114(FUN_003e1114View *self)
{
    return self->member;
}

} /* extern "C" */
