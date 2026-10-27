#include "common.h"

extern "C" {

struct FUN_00466e8cView {
    u8 unk00[0x124];
    u8 member[1];
};

void *FUN_00466e8c(FUN_00466e8cView *self)
{
    return self->member;
}

} /* extern "C" */
