#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ u8 flag;
} Holder;

/* Clears the byte at 0x12. */
void nwFontGlyphInit(Holder *object)
{
    object->flag = 0;
}

} /* extern "C" */
