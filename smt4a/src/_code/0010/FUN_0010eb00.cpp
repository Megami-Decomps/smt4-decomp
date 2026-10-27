#include "common.h"

extern "C" {

struct FUN_0010eb00View {
    u8 unk00[0x294];
    u8 member[1];
};

void *FUN_0010eb00(FUN_0010eb00View *self)
{
    return self->member;
}

} /* extern "C" */
