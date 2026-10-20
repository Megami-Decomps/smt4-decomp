#include "classes/Obj55922c.h"

/* Drops the held pointer and takes `newPtr` when it is not NULL. */
void Obj55922c::reset(void *newPtr)
{
    if (ptr != NULL) {
        ptr = NULL;
    }
    if (newPtr != NULL) {
        ptr = newPtr;
    }
}
