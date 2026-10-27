#include "common.h"

extern "C" {

struct FUN_00449708View {
    u8 unk00[0x1c];
    u8 member[1];
};

void *FUN_00449708(FUN_00449708View *self)
{
    return self->member;
}

} /* extern "C" */
