#include "common.h"

extern "C" {

void asdMemFree(void *memory);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ void *buffer;
} Holder;

/* Frees the buffer at 0x28. */
void FUN_002b2f08(Holder *object)
{
    asdMemFree(object->buffer);
}

} /* extern "C" */
