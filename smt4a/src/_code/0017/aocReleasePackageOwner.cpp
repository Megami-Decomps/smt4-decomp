#include "classes/Obj4221d4.h"
#include "shard/W4_Match3_AocMainA.h"
#include "addon/aocMain.h"
#include "addon/AocSystemA.h"

extern "C" {


int _ZN9Obj4221d4D1Ev(...);
int aocPackageOwnerFreeTables(AocSystemA *owner);
int __aeabi_vec_delete(void *handle, int (*callback)(...));

extern AocMainA *g_aocMain;

/* Tears the owner down: clears its counters, destroys its package array with _ZN9Obj4221d4D1Ev, then clears flag 0x10000 in the global block. */
void aocReleasePackageOwner(AocSystemA *owner)
{
    owner->packageCount = 0;
    owner->packageHandle = 0;
    owner->unk350 = 0;
    if (owner->packages != NULL) {
        __aeabi_vec_delete(owner->packages, _ZN9Obj4221d4D1Ev);
        owner->packages = NULL;
    }
    aocPackageOwnerFreeTables(owner);
    g_aocMain->flags = g_aocMain->flags & ~0x10000;
}

} /* extern "C" */
