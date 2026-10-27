#include "common.h"

extern "C" {

struct FUN_00502744View {
    u8 unk00[0x8c];
    u8 member[1];
};

void *FUN_00502744(FUN_00502744View *self)
{
    return self->member;
}

} /* extern "C" */
