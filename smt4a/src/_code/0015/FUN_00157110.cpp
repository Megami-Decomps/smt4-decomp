/* NON_MATCHING: vector erasure swaps the begin-pointer and element-count registers (r2/r3). */
#include "shard/ResourceVectorOwner.h"

extern "C" {
void asdMemFree(void *allocation);

// Release every owned block, clear the pointer vector and mark it inactive.
void FUN_00157110(ResourceVectorOwner *owner)
{
    for (std::vector<void *>::iterator entry = owner->resources.begin();
         entry != owner->resources.end(); ++entry) {
        if (*entry != NULL)
            asdMemFree(*entry);
    }
    owner->resources.clear();
    owner->flags &= ~1u;
}
}
