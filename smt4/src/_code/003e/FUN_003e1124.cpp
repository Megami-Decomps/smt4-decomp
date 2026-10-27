#include "common.h"

extern "C" {

struct FUN_003e1124View {
    u8 unk00[0xbc];
    u8 member[1];
};

void *FUN_003e1124(FUN_003e1124View *self)
{
    return self->member;
}

} /* extern "C" */
