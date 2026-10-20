#include "common.h"

extern "C" {

typedef struct Voice {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 dirtyFlags;
    /* 0x22 */ u8 unk22[0xA];
    /* 0x2C */ u8 panMode;
    /* 0x2D */ u8 panCurve;
} Voice;

void nw_snd_internal_driver_Voice_SetPanMode(Voice *voice, u8 mode)
{
    if (voice->panMode != mode) {
        voice->panMode = mode;
        voice->dirtyFlags = voice->dirtyFlags | 8;
    }
}

} /* extern "C" */
