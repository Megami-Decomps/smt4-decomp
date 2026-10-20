#include "shard/Shard0042.h"

extern "C" {

extern u8 DAT_00557f7c;
extern void mwmomobiclipDecoderRelease(u32 handle);

/* Installs the vtable and releases the handle at +4. */
VtblHandle *vtblHolderInit557f7c(VtblHandle *obj)
{
    obj->vtbl = &DAT_00557f7c;
    mwmomobiclipDecoderRelease(obj->handle);
    return obj;
}

} /* extern "C" */
