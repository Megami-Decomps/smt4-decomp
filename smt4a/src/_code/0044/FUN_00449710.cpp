#include "common.h"

extern "C" {

struct FUN_00449710View {
    u8 unk00[0x2c];
    u8 member[1];
};

void *FUN_00449710(FUN_00449710View *self)
{
    return self->member;
}

} /* extern "C" */
