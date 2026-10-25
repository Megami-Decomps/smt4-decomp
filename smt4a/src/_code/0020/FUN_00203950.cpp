#include "common.h"
#include "mobiclip_ctrl/MobiclipHeapOwners.h"

extern "C" {

void FUN_001a1244(MobiclipHeap *owner, void *block);

void FUN_00203950(void *block)
{
    if (block != NULL) {
        FUN_001a1244(mobiclipHeapOwnerAt(2), block);
    }
}

} /* extern "C" */
