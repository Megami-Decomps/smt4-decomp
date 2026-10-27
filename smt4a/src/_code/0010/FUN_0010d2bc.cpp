#include "common.h"

extern "C" {

struct FUN_0010d2bcView {
    u8 unk00[0x4];
    u8 value;
};

void FUN_0010d2bc(FUN_0010d2bcView *self)
{
    self->value = 1;
}

} /* extern "C" */
