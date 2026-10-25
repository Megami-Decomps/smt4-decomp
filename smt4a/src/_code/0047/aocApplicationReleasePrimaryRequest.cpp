#include "addon/AocBufferRequest.h"


extern "C" {
void asdMemFree(void* memory);

// Release the owned object and backing allocation.
void aocApplicationReleasePrimaryRequest(AocApplicationRequestView *owner)
{
    if (owner->primary != NULL) {
        delete owner->primary;
        owner->primary = NULL;
    }
    if (owner->primaryBuffer != NULL) {
        asdMemFree(owner->primaryBuffer);
        owner->primaryBuffer = NULL;
    }
}
}
