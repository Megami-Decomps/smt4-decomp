/* NON_MATCHING: close/reset field store and allocator-call scheduling have not been matched. */
#include "classes/Obj557f00.h"
extern "C" {
void FUN_00423144(u32 handle);
void FUN_004230c0(u32 handle);
void callbackResetStateAndCount(void *object);
}

void Obj557f00::close()
{
    if (handle != -1) {
        FUN_00423144(handle);
        active = 0;
        submitted = 0;
        pending = 0;
        cursor = 0;
        if (handle != -1) {
            FUN_004230c0(handle);
            handle = -1;
            allocator->vtable->release(allocator, pixels);
            pixels = NULL;
        }
    }
    callbackResetStateAndCount(this);
}
