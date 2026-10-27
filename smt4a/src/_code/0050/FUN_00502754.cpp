#include "common.h"

extern "C" {

struct FUN_00502754View {
    u8 unk00[0xbc];
    u8 member[1];
};

void *FUN_00502754(FUN_00502754View *self)
{
    return self->member;
}

} /* extern "C" */
