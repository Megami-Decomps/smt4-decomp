#include "common.h"
struct OwnerState { u8 unk00[0x3214]; s32 handle; };
extern "C" {
extern s32 DAT_00439ad4;
void frameTexStartFade(s32 handle);
/* Installs a positive global handle when the owner has none. */
void workAdoptGlobalHandle(OwnerState *owner)
{
    if (owner->handle == 0) {
        s32 handle = DAT_00439ad4;
        if (handle > 0) {
            frameTexStartFade(handle);
            owner->handle = handle;
        }
    }
}
}
