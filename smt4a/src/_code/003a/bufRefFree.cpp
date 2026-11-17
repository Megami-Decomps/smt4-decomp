#include "shard/Shard003A.h"
#include "font/InfoWinA.h"

extern "C" {



extern void asdMemFree(void *ptr);

/* Frees the buffer referenced through the owner and clears the reference. */
void bufRefFree(void)
{
    InfoWindowA *owner = g_infoWin;
    u32 **slot = NULL;

    if (owner != NULL) {
        slot = static_cast<u32 **>(owner->text); /* the text object starts with its buffer */
    }
    if (owner != NULL && slot != NULL && *slot != NULL) {
        asdMemFree(*slot);
        *static_cast<u32 **>(owner->text) = NULL;
    }
}

} /* extern "C" */
