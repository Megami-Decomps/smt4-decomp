#include "addon/AocBufferRequest.h"
#include "addon/aocMain.h"


extern "C" {
void asdMemFree(void* memory);

// Release the owned object and backing allocation.
void aocApplicationReleasePrimaryRequest(AocMain *owner)
{
    if (owner->contentRequest != NULL) {
        delete owner->contentRequest;
        owner->contentRequest = NULL;
    }
    if (owner->contentBuffer != NULL) {
        asdMemFree(owner->contentBuffer);
        owner->contentBuffer = NULL;
    }
}
}
