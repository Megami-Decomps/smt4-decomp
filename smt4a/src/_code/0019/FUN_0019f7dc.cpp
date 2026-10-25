/* NON_MATCHING: retail loads dirty through literal offset 0x11e8; compiler reuses the already-adjusted base register. */
#include "common.h"

struct UniformContext;
struct MaterialParameterWork {
    /* 0x0000 */ u8 unk0000[0x530];
    /* 0x0530 */ UniformContext *handle;
    /* 0x0534 */ u8 unk0534[0xca4];
    /* 0x11D8 */ f32 parameters[4];
    /* 0x11E8 */ u8 dirty;
};

extern "C" void FUN_0019f828(UniformContext *context, const u32 parameters[4]);

// Upload the parameter block when its float value changes or it is marked dirty.
extern "C" void FUN_0019f7dc(MaterialParameterWork* work, f32 value)
{
    if (work->dirty != 0 || work->parameters[3] != value) {
        work->parameters[3] = value;
        FUN_0019f828(work->handle, reinterpret_cast<const u32 *>(work->parameters));
    }
    work->dirty = 0;
}
