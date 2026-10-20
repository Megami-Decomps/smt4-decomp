#include "common.h"

extern "C" {

typedef struct Pair {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
} Pair;

/* Copies the pair into `dest` when it is not NULL. */
void pairCopyIfNotNull(u32 unused, Pair *dest, Pair *source)
{
    if (dest != NULL) {
        dest->first = source->first;
        dest->second = source->second;
    }
}

} /* extern "C" */
