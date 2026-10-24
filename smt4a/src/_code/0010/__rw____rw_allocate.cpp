/* NON_MATCHING: retail uses push {r0, r1, r4, lr} where the compiled block uses push {r4, lr}. */
#include "common.h"

extern "C" {
void* asdOperatorNewB(u32 size);
void _ZN4__rw10__rw_throwEiz(int kind, ...);

void* _ZN4__rw13__rw_allocateEji(u32 size)
{
    void* allocation = asdOperatorNewB(size);
    if (allocation == NULL) {
        _ZN4__rw10__rw_throwEiz(3);
    }
    return allocation;
}
}
