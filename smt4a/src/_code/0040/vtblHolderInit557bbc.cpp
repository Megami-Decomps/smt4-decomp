#include "shard/Shard0040.h"

extern "C" {

extern u8 DAT_00557bbc;

/* Installs the vtable. */
void vtblHolderInit557bbc(VtblHolder *obj)
{
    obj->vtbl = &DAT_00557bbc;
}

} /* extern "C" */
