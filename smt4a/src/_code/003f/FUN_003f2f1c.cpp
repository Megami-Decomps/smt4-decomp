#include "common.h"
#include "nn/svc.h"

extern "C" {

struct Owner { u32 handle; u8 initialized; };
void resetFlag5891A4And65f8(void);

Owner *FUN_003f2f1c(Owner *owner)
{
    if (owner->initialized != 0) {
        resetFlag5891A4And65f8();
        owner->initialized = 0;
    }
    if (owner->handle != 0) {
        nn::svc::CloseHandle(owner->handle);
        owner->handle = 0;
    }
    return owner;
}

} /* extern "C" */
