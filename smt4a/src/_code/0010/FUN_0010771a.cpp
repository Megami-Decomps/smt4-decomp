#include "common.h"

extern "C" {

struct FUN_0010771aView {
    u8 unk00[0x220];
    u8 member[1];
};

void *FUN_0010771a(FUN_0010771aView *self)
{
    return self->member;
}

} /* extern "C" */
