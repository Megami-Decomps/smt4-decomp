/* NON_MATCHING: The retained-reference setter uses r4/r5 in the opposite roles and schedules the add-ref arguments differently. */
#include "classes/Obj55a178.h"

extern "C" void sharedRefRelease(void *);
extern "C" void FUN_002f4f20(void *, s32);

void Obj55a178::setTarget(void *object)
{
    if (reference != NULL) {
        sharedRefRelease(reference);
        reference = NULL;
    }
    if (object != NULL) {
        reference = object;
        FUN_002f4f20((u8 *)object + 4, 1);
    }
}
