#include "common.h"

extern "C" {

struct FUN_003684d8View {
    u8 unk00[0x3c];
    u8 member[1];
};

void *FUN_003684d8(FUN_003684d8View *self)
{
    return self->member;
}

} /* extern "C" */
