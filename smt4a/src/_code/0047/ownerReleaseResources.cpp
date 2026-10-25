#include "addon/AocBufferRequest.h"

extern "C" {

void asdMemFree(void *memory);

/* Releases the object and the buffer an owner holds. */
void ownerReleaseResources(AocApplicationRequestView *owner)
{
    if (owner->auxiliary != NULL) {
        delete owner->auxiliary;
        owner->auxiliary = NULL;
    }
    if (owner->auxiliaryBuffer != NULL) {
        asdMemFree(owner->auxiliaryBuffer);
        owner->auxiliaryBuffer = NULL;
    }
}

} /* extern "C" */
