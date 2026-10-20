#include "common.h"

extern "C" {

typedef struct Voice {
    /* 0x000 */ u8 unk000[0x1A0];
    /* 0x1A0 */ u32 callback;
    /* 0x1A4 */ u32 userData;
} Voice;

/* Clears the voice's callback and user data, if there is a voice. */
void voiceClearCallback(Voice *voice)
{
    if (voice != NULL) {
        voice->callback = 0;
        voice->userData = 0;
    }
}

} /* extern "C" */
