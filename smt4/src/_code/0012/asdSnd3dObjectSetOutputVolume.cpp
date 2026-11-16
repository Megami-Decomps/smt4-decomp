#include "common.h"

extern "C" {

struct FUN_00121020View {
    u8 unk00[0x50];
    f32 value;
};

void asdSnd3dObjectSetOutputVolume(FUN_00121020View *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
