#include "addon/aocMain.h"
#include "addon/AocSystem.h"

extern "C" {

int destroyObj0055c6e4(...);
int aocPackageOwnerFreeTables(AocSystem *owner);
int __aeabi_vec_delete(void *handle, int (*callback)(...));

/* Tears the owner down: clears its counters, destroys its package array with destroyObj0055c6e4, then clears flag 0x10000 in the global block. */
void aocReleasePackageOwner(AocSystem *owner)
{
    owner->packageCount = 0;
    owner->packageHandle = 0;
    owner->unk350 = 0;
    if (owner->packages != NULL) {
        __aeabi_vec_delete(owner->packages, destroyObj0055c6e4);
        owner->packages = NULL;
    }
    aocPackageOwnerFreeTables(owner);
    g_aocMain->flags = g_aocMain->flags & ~0x10000;
}

} /* extern "C" */
