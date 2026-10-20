#include "common.h"

extern "C" {

typedef struct Voice {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 dirtyFlags;
    /* 0x22 */ u8 unk22[6];
    /* 0x28 */ f32 pitch;
    /* 0x2C */ u8 unk2C[4];
    /* 0x30 */ f32 pan;
    /* 0x34 */ f32 surroundPan;
    /* 0x38 */ f32 lpfFreq;
} Voice;

/* Stores the new value and marks it dirty when it changed. */
void nw_snd_internal_driver_Voice_SetSurroundPan(Voice *voice, f32 value)
{
    if (voice->surroundPan != value) {
        voice->surroundPan = value;
        voice->dirtyFlags |= 0x8;
    }
}

} /* extern "C" */
