/* NON_MATCHING: retail uses push {r0, r1, r4, lr} where the compiled block uses push {r4, lr}. */
#include "common.h"

extern "C" {
void* asdOperatorNewB(u32 size);
void FUN_002e32a4(int kind, ...);

void* FUN_001006c2(u32 size)
{
    void* allocation = asdOperatorNewB(size);
    if (allocation == NULL) {
        FUN_002e32a4(3);
    }
    return allocation;
}
}
