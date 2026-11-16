#include "nn/svc.h"
#include "nn/os/HandleOwner.h"

extern "C" {

void resetFlag5891A4And65f8(void);

/* Stops the owner if it was started and closes its handle. */
HandleOwner *handleOwnerClose(HandleOwner *owner)
{
    if (owner->started == 1) {
        resetFlag5891A4And65f8();
        owner->started = 0;
    }
    if (owner->handle != 0) {
        nn::svc::CloseHandle(owner->handle);
        owner->handle = 0;
    }
    return owner;
}

} /* extern "C" */
