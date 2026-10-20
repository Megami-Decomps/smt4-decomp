#include "common.h"

extern "C" {

typedef struct Object002e14b8 {
    /* 0x000 */ u8 unk000[0x478];
    /* 0x478 */ void *buffer;
} Object002e14b8;

void asdMemFree(void *block);

/* Releases the object's buffer. */
void objectFreeBuffer(Object002e14b8 *obj)
{
    void **slot = &obj->buffer;

    if (*slot != NULL) {
        asdMemFree(*slot);
        *slot = NULL;
    }
}

} /* extern "C" */
