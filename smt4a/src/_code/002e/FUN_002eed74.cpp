#include "common.h"

extern "C" {

void FUN_002e7232(void *buffer);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 first;
    /* 0x08 */ void *buffer;
    /* 0x0C */ u32 second;
} Holder;

/* Frees the buffer at 8 (if any) and clears the three words. */
void FUN_002eed74(Holder *object)
{
    if (object->buffer != NULL) {
        FUN_002e7232(object->buffer);
    }
    object->buffer = NULL;
    object->first = 0;
    object->second = 0;
}

} /* extern "C" */
