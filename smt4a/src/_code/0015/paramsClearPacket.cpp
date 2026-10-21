#include "common.h"

extern "C" {

typedef struct Words8 {
    /* 0x00 */ u32 words[8];
} Words8;

/* Constructor: clears the eight words. */
void paramsClearPacket(Words8 *object)
{
    object->words[0] = 0;
    object->words[1] = 0;
    object->words[2] = 0;
    object->words[3] = 0;
    object->words[4] = 0;
    object->words[5] = 0;
    object->words[6] = 0;
    object->words[7] = 0;
}

} /* extern "C" */
