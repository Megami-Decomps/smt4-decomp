#include "common.h"

extern "C" {

struct FUN_0010eb08View {
    u8 unk00[0x284];
    u8 member[1];
};

void *FUN_0010eb08(FUN_0010eb08View *self)
{
    return self->member;
}

} /* extern "C" */
