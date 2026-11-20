#include "common.h"
extern "C" {
void *sharedRefAcquireFromOwner(void **temporary, void *owner, void **value);
void sharedRefRelease(void *value);
/* Replaces a shared reference after releasing its previous value. */
void sharedRefAssignFromOwner(void **destination, void *owner, void **source) {
    void *previous = *source;
    void *temporary[2];
    temporary[1] = *source;
    sharedRefAcquireFromOwner(temporary, owner, &temporary[1]);
    *source = temporary[0];
    sharedRefRelease(previous);
    *destination = *source;
}
}
