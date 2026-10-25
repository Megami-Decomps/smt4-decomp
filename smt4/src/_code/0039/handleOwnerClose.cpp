#include "nn/svc.h"
#include "nn/os/HandleOwner.h"

extern "C" {

void FUN_00351ca0(void);

/* Stops the owner if it was started and closes its handle. */
HandleOwner *handleOwnerClose(HandleOwner *owner)
{
    if (owner->started == 1) {
        FUN_00351ca0();
        owner->started = 0;
    }
    if (owner->handle != 0) {
        nn::svc::CloseHandle(owner->handle);
        owner->handle = 0;
    }
    return owner;
}

} /* extern "C" */
