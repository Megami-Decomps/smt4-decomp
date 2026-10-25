#include "common.h"
#include "mobiclip_ctrl/MobiclipHeapOwners.h"

extern "C" {

void FUN_001a1244(MobiclipHeap *owner, void *block);

void FUN_0028120c(void *block)
{
    if (block != NULL) {
        FUN_001a1244(mobiclipHeapOwnerAt(3), block);
    }
}

} /* extern "C" */
