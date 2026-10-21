/* NON_MATCHING: process callback entry 0x348cd0 has no function symbol; its original eight-byte body returns zero. */
#include "common.h"

struct FreeCameraWork {
    u32 process;
    u32 mode;
    u8 flag8;
    u8 flag9;
    u8 unk0a[2];
    f32 value;
    u32* output;
};

extern "C" {
extern FreeCameraWork* g_freeCamera;
extern const u8 LAB_00348cd0[];
void* asdOperatorNew(u32 size);
u32 asdProcessCreateSimple(const char* name, s32 priority, u32 option, u32 argument,
                           const void* callback, u32 first, u32 second);

void FUN_00348c50(u32 mode)
{
    FreeCameraWork* work = static_cast<FreeCameraWork*>(asdOperatorNew(sizeof(FreeCameraWork)));
    g_freeCamera = work;
    work->process = asdProcessCreateSimple("FreeCamera PROC", 4, 0, 0, LAB_00348cd0, 0, 0);
    work->mode = mode;
    work->flag8 = 0;
    work->flag9 = 0;
    work->value = 0.0f;
}
}
