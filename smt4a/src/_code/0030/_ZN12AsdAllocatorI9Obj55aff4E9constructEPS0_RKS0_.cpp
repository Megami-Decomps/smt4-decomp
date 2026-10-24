/* NON_MATCHING: thumb scheduling only: retail moves r2 to r1 after the null branch, armcc hoists it before the push (flag trial --cpu=5TE requested). */
#include "common.h"

extern "C" {

void _ZN9Obj55aff4C1ERKS_(void *object, const void *source);

/* Copy-constructs an element in place. */
void _ZN12AsdAllocatorI9Obj55aff4E9constructEPS0_RKS0_(void *allocator, void *object, const void *source)
{
    if (object != NULL) {
        _ZN9Obj55aff4C1ERKS_(object, source);
    }
}

} /* extern "C" */
