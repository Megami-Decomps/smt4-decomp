/* NON_MATCHING: The retained-reference setter uses r4/r5 in the opposite roles and schedules the add-ref arguments differently. */
#include "classes/Obj55a178.h"
#include "sys/AtomicCounter.h"

extern "C" void sharedRefRelease(void *);

void Obj55a178::setTarget(void *object)
{
    if (reference != NULL) {
        sharedRefRelease(reference);
        reference = NULL;
    }
    if (object != NULL) {
        reference = object;
        atomicAddS32(reinterpret_cast<s32 *>(static_cast<u8 *>(object) + 4), 1);
    }
}
