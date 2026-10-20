#include "shard/Shard0048.h"

extern "C" {

/* Releases the two objects the owner holds (through their vtables). */
void twoObjectsRelease(TwoObjects *owner)
{
    if (owner->first != NULL) {
        owner->first->vtbl->release(owner->first);
        owner->first = NULL;
    }
    if (owner->second != NULL) {
        owner->second->vtbl->release(owner->second);
        owner->second = NULL;
    }
}

} /* extern "C" */
