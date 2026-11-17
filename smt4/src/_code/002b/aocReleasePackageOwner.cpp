#include "addon/aocMain.h"
#include "addon/AocSystem.h"

extern "C" {


int destroyObj0055c6e4(...);
int FUN_002b486c(AocSystem *owner);
int FUN_002b4b88(void *handle, int (*callback)(...));

extern AocMain *g_aocMain;

/* Tears the owner down: clears its counters, destroys its package array with destroyObj0055c6e4, then clears flag 0x10000 in the global block. */
void aocReleasePackageOwner(AocSystem *owner)
{
    owner->packageCount = 0;
    owner->packageHandle = 0;
    owner->unk350 = 0;
    if (owner->packages != NULL) {
        FUN_002b4b88(owner->packages, destroyObj0055c6e4);
        owner->packages = NULL;
    }
    FUN_002b486c(owner);
    g_aocMain->flags = g_aocMain->flags & ~0x10000;
}

} /* extern "C" */
