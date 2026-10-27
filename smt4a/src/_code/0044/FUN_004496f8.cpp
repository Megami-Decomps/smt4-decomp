#include "common.h"

extern "C" {

struct FUN_004496f8View {
    u8 unk00[0x5c];
    u8 member[1];
};

void *FUN_004496f8(FUN_004496f8View *self)
{
    return self->member;
}

} /* extern "C" */
