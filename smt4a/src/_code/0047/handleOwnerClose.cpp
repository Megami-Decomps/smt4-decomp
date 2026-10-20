/* NON_MATCHING: retail closes the handle with an inline `svc 0x23`; the build calls the svcCloseHandle stub (software_interrupt) instead (svc intrinsics are not allowed) */
#include "common.h"

extern "C" {

typedef struct HandleOwner0047da90 {
    /* 0x00 */ u32 handle;
    /* 0x04 */ u8 started;
} HandleOwner0047da90;

void resetFlag5891A4And65f8(void);
void software_interrupt(s32 number);

/* Stops the owner if it was started and closes its handle. */
HandleOwner0047da90 *handleOwnerClose(HandleOwner0047da90 *owner)
{
    if (owner->started == 1) {
        resetFlag5891A4And65f8();
        owner->started = 0;
    }
    if (owner->handle != 0) {
        software_interrupt(0x23);
        owner->handle = 0;
    }
    return owner;
}

} /* extern "C" */
