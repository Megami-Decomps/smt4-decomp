/* NON_MATCHING: compiler loads the heap owner directly into r0 instead of retail r2 followed by a move. */
#include "common.h"

extern "C" {

struct HeapOwner;
extern HeapOwner DAT_00617ca0;
void FUN_001a1244(HeapOwner *owner, void *block);
void FUN_00227f8c(void *block)
{
    if (block != NULL) {
        FUN_001a1244(&DAT_00617ca0, block);
    }
}

} /* extern "C" */
