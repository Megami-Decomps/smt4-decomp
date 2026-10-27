#include "common.h"

extern "C" {

struct FUN_00121028View {
    u8 unk00[0x4c];
    f32 value;
};

void FUN_00121028(FUN_00121028View *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
