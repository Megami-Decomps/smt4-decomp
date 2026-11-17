#include "addon/AocBufferRequest.h"
#include "addon/aocMain.h"

extern "C" {

void asdMemFree(void *memory);

/* Releases the object and the buffer an owner holds. */
void ownerReleaseResources(AocMain *owner)
{
    if (owner->itemRequest != NULL) {
        delete owner->itemRequest;
        owner->itemRequest = NULL;
    }
    if (owner->itemBuffer != NULL) {
        asdMemFree(owner->itemBuffer);
        owner->itemBuffer = NULL;
    }
}

} /* extern "C" */
