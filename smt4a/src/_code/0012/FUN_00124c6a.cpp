/* NON_MATCHING: retail adjusts the pointer by 216 and stores at +28 (a this-adjusting thunk into a secondary base's setter); the build folds the 244 offset as 192 + 52. */
#include "common.h"

extern "C" {

struct FUN_00124c6aView {
    u8 unk00[0xf4];
    u32 value;
};

void FUN_00124c6a(FUN_00124c6aView *self, u32 unused, u32 value)
{
    self->value = value;
}

} /* extern "C" */
