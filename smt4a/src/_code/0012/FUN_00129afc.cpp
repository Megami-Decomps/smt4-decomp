#include "common.h"

extern "C" {

struct FUN_00129afcView {
    u8 unk00[0x4];
    u32 value;
};

void FUN_00129afc(FUN_00129afcView *self, u32 value)
{
    self->value = value;
}

} /* extern "C" */
