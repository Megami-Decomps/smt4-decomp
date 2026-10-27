#include "common.h"

extern "C" {

struct FUN_00462438View {
    u8 unk00[0xc];
    f32 value;
};

void FUN_00462438(FUN_00462438View *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
