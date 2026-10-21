/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void *bufferReleaseOwnedPair(void *obj);
void *bufferDestroyOwnedPair(void *obj);
void asdMemFreeNonNull(void *obj);

void FUN_002b2344(void *obj)
{
    if (obj == NULL) return;

    bufferReleaseOwnedPair(obj);
    asdMemFreeNonNull(bufferDestroyOwnedPair(obj));
}

}
