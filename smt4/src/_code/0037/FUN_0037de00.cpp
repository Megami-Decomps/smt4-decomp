#include "common.h"

extern "C" {

struct FUN_0037de00View {
    u8 unk00[0xc];
    f32 value;
};

void FUN_0037de00(FUN_0037de00View *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
