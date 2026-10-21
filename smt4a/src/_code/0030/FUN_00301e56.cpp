/* NON_MATCHING: compiler moves the value argument before the null check. */
#include "shard/W6_W6Match3_TreeCopy.h"
extern "C" {
// Copy-construct an optional object from the supplied erased source pointer.
void FUN_00301e56(void* unused, void* object, u32 value)
{
    if (object != NULL) {
        FUN_001301be(static_cast<OnlineRecordTree*>(object),
                     reinterpret_cast<const OnlineRecordTree*>(value), 0);
    }
}
}
