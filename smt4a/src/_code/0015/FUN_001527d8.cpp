#include "text/TextDraw.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 value;
} Holder;

/* Stores `color` with its low byte cleared in the word at 0x38 of the object. */
void FUN_001527d8(u32 handle, u32 color)
{
    ((Holder *)handle)->value = color & 0xFFFFFF00;
}

} /* extern "C" */
