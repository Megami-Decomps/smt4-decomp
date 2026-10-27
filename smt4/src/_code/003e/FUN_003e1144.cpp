#include "common.h"

extern "C" {

struct FUN_003e1144View {
    u8 unk00[0x2c];
    u8 member[1];
};

void *FUN_003e1144(FUN_003e1144View *self)
{
    return self->member;
}

} /* extern "C" */
