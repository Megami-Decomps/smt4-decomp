#include "common.h"

extern "C" {

struct FUN_00460ffcView {
    u8 unk00[0x4];
    u32 value;
};

void FUN_00460ffc(FUN_00460ffcView *self, u32 value)
{
    self->value = value;
}

} /* extern "C" */
