#include "addon/aocMain.h"

extern "C" {


int destroyObj0055c6e4(...);
int FUN_002b486c(AocPackageOwner *owner);
int FUN_002b4b88(void *handle, int (*callback)(...));

extern AocMain *g_aocMain;

/* Tears the owner down: clears its counters, releases its handle with destroyObj0055c6e4, then clears flag 0x10000 in the global block. */
void aocReleasePackageOwner(AocPackageOwner *owner)
{
    owner->unk310 = 0;
    owner->unk314 = 0;
    owner->unk350 = 0;
    if (owner->handle != NULL) {
        FUN_002b4b88(owner->handle, destroyObj0055c6e4);
        owner->handle = NULL;
    }
    FUN_002b486c(owner);
    g_aocMain->flags = g_aocMain->flags & ~0x10000;
}

} /* extern "C" */
