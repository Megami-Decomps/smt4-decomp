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
    Object002e14b8 *object = &g_asdSound;
    if (object->buffer != NULL) {
        asdMemFree(object->buffer);
        object->buffer = NULL;
    }
}

} /* extern "C" */
