#include "common.h"

extern "C" {

struct FUN_00461d18View {
    u8 unk00[0x83];
    u8 value;
};

void FUN_00461d18(FUN_00461d18View *self, u8 value)
{
    self->value = value;
}

} /* extern "C" */
