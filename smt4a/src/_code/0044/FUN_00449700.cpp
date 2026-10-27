#include "common.h"

extern "C" {

struct FUN_00449700View {
    u8 unk00[0x4c];
    u8 member[1];
};

void *FUN_00449700(FUN_00449700View *self)
{
    return self->member;
}

} /* extern "C" */
