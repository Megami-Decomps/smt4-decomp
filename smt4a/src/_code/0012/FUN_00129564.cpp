#include "common.h"

extern "C" {

struct FUN_00129564View {
    u8 unk00[0x4];
    u32 value;
};

void FUN_00129564(FUN_00129564View *self, u32 value)
{
    self->value = value;
}

} /* extern "C" */
