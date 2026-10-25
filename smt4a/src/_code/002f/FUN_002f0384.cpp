/* NON_MATCHING: preset/tail-call block layout and VFP constant-pool ordering differ. */
#include "shard/Shard0033.h"

extern "C" {
extern ObjBRef g_gameGlobals;
void FUN_00240170(void);
void statusCameraSetEye(f32, f32, f32);
void statusCameraApply(void);

// Restore the configured or default camera preset in the two supported screen modes.
void FUN_002f0384(s32 configured)
{
    u8 mode = g_gameGlobals.instance->unk2018;
    if (mode != 3 && mode != 10)
        return;
    if (configured != 0)
        FUN_00240170();
    else
        statusCameraSetEye(mode == 10 ? 125.0f : 100.0f, 6.3f, 4.5f);
    statusCameraApply();
}
}
