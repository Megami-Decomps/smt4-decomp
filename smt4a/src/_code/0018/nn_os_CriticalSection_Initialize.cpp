#include "common.h"

extern "C" {

void nn_os_SimpleLock_Initialize(void *object);

typedef struct Pair {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
} Pair;

/* Runs nn_os_SimpleLock_Initialize on the object, then clears the two words at 4 and 8. */
void nn_os_CriticalSection_Initialize(Pair *object)
{
    nn_os_SimpleLock_Initialize(object);
    object->first = 0;
    object->second = 0;
}

} /* extern "C" */
