#include "shard/W4_Match3_AocMainA.h"
#include "addon/aocMain.h"

extern "C" {


int _ZN9Obj4221d4D1Ev(...);
int FUN_00191f68(AocPackageOwner *owner);
int deletingDtor_002e56ec(void *handle, int (*callback)(...));

extern AocMainA *g_aocMain;

/* Tears the owner down: clears its counters, releases its handle with _ZN9Obj4221d4D1Ev, then clears flag 0x10000 in the global block. */
void aocReleasePackageOwner(AocPackageOwner *owner)
{
    owner->unk310 = 0;
    owner->unk314 = 0;
    owner->unk350 = 0;
    if (owner->handle != NULL) {
        deletingDtor_002e56ec(owner->handle, _ZN9Obj4221d4D1Ev);
        owner->handle = NULL;
    }
    FUN_00191f68(owner);
    g_aocMain->flags = g_aocMain->flags & ~0x10000;
}

} /* extern "C" */
