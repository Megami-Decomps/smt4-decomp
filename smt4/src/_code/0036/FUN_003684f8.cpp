#include "common.h"

extern "C" {

struct FUN_003684f8View {
    u8 unk00[0x2c];
    u8 member[1];
};

void *FUN_003684f8(FUN_003684f8View *self)
{
    return self->member;
}

} /* extern "C" */
