#include "common.h"

extern "C" {

struct FUN_00461d20View {
    u8 unk00[0xf4];
    u8 value;
};

void FUN_00461d20(FUN_00461d20View *self, u8 value)
{
    self->value = value;
}

} /* extern "C" */
