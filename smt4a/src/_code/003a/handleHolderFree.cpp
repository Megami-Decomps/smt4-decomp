#include "shard/Shard003A.h"

extern "C" {

typedef struct HandleHolder {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ void *unk38;
    /* 0x3C */ u8 unk3C[4];
    /* 0x40 */ void *unk40;
} HandleHolder;

extern void asdTextureRelease(void *p);
extern void handleBlockRefDrop(void *p);
extern void asdMemFree(void *ptr);

/* Releases the object's two owned handles and the object. */
void handleHolderFree(HandleHolder *holder)
{
    if (holder->unk38 != NULL) {
        asdTextureRelease(holder->unk38);
    }
    if (holder->unk40 != NULL) {
        handleBlockRefDrop(holder->unk40);
    }
    asdMemFree(holder);
}

} /* extern "C" */
