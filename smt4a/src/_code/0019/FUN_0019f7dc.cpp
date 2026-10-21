/* NON_MATCHING: retail loads dirty through literal offset 0x11e8; compiler reuses the already-adjusted base register. */
#include "common.h"

struct MaterialParameterWork {
    /* 0x0000 */ u8 unk0000[0x530];
    /* 0x0530 */ u32 handle;
    /* 0x0534 */ u8 unk0534[0xca4];
    /* 0x11D8 */ u32 parameters[3];
    /* 0x11E4 */ f32 value;
    /* 0x11E8 */ u8 dirty;
};

extern "C" void FUN_0019f828(u32 handle, const void* parameters);

// Upload the parameter block when its float value changes or it is marked dirty.
extern "C" void FUN_0019f7dc(MaterialParameterWork* work, f32 value)
{
    if (work->dirty != 0 || work->value != value) {
        work->value = value;
        FUN_0019f828(work->handle, work->parameters);
    }
    work->dirty = 0;
}
