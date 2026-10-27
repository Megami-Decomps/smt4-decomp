#include "common.h"

extern "C" {

struct FUN_0045feccView {
    u8 unk00[0x118];
    u8 member[1];
};

void *FUN_0045fecc(FUN_0045feccView *self)
{
    return self->member;
}

} /* extern "C" */
