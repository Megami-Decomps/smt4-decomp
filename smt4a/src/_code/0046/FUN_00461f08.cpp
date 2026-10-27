#include "common.h"

extern "C" {

struct FUN_00461f08View {
    u8 unk00[0xf0];
    u8 value;
};

void FUN_00461f08(FUN_00461f08View *self, u8 value)
{
    self->value = value;
}

} /* extern "C" */
