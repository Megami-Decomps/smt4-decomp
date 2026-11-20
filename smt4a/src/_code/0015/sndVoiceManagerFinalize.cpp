#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 value;
} Holder;

/* Sets the word at 0x18 to -1. */
void sndVoiceManagerFinalize(Holder *object)
{
    object->value = 0xFFFFFFFF;
}

} /* extern "C" */
