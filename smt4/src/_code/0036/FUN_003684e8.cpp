#include "common.h"

extern "C" {

struct FUN_003684e8View {
    u8 unk00[0x4c];
    u8 member[1];
};

void *FUN_003684e8(FUN_003684e8View *self)
{
    return self->member;
}

} /* extern "C" */
