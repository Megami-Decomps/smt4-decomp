/* NON_MATCHING: compiler uses different register allocation, frame setup or instruction scheduling than retail. */
#include "common.h"
extern "C" {
void *FUN_002f9d6a(void **temporary, void *owner, void **value);
void sharedRefRelease(void *value);
/* Replaces a shared reference after releasing its previous value. */
void FUN_002f2da0(void **destination, void *owner, void **source) {
    void *previous = *source;
    void *temporary[2];
    temporary[1] = *source;
    FUN_002f9d6a(temporary, owner, &temporary[1]);
    *source = temporary[0];
    sharedRefRelease(previous);
    *destination = *source;
}
}
