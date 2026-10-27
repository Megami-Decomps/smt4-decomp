#include "common.h"

extern "C" {

struct FUN_00129a08View {
    u8 unk00[0x4];
    u32 value;
};

void FUN_00129a08(FUN_00129a08View *self, u32 value)
{
    self->value = value;
}

} /* extern "C" */
