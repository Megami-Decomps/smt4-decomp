#include "shard/Shard0042.h"

extern "C" {

extern u8 DAT_00557f34;
extern void recordFree(u32 handle);

/* Installs the vtable and releases the handle at +4. */
VtblHandle *vtblHolderInit557f34(VtblHandle *obj)
{
    obj->vtbl = &DAT_00557f34;
    recordFree(obj->handle);
    return obj;
}

} /* extern "C" */
