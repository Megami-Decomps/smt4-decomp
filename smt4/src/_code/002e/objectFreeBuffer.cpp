/* NON_MATCHING: retail preserves an incoming value in r1 and computes the buffer slot across the free call; this version folds the slot address. */
#include "common.h"

extern "C" {

typedef struct Object002e14b8 {
    /* 0x000 */ u8 unk000[0x478];
    /* 0x478 */ void *buffer;
} Object002e14b8;

extern Object002e14b8 g_asdSound;

void asdMemFree(void *block);

/* Releases the object's buffer. */
void objectFreeBuffer(void)
{
    void **slot = &g_asdSound.buffer;

    if (*slot != NULL) {
        asdMemFree(*slot);
        *slot = NULL;
    }
}

} /* extern "C" */
