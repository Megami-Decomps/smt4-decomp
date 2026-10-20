#include "shard/Shard003A.h"

extern "C" {

typedef struct BufOwner {
    /* 0x000 */ u8 unk000[0x328];
    /* 0x328 */ u32 **slot;
} BufOwner;

extern BufOwner *g_infoWin;

extern void asdMemFree(void *ptr);

/* Frees the buffer referenced through the owner and clears the reference. */
void bufRefFree(void)
{
    BufOwner *owner = g_infoWin;
    u32 **slot = NULL;

    if (owner != NULL) {
        slot = owner->slot;
    }
    if (owner != NULL && slot != NULL && *slot != NULL) {
        asdMemFree(*slot);
        *owner->slot = NULL;
    }
}

} /* extern "C" */
