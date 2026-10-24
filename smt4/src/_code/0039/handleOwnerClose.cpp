#include "nn/svc.h"

extern "C" {

typedef struct HandleOwner {
    /* 0x00 */ u32 handle;
    /* 0x04 */ u8 started;
} HandleOwner;

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
