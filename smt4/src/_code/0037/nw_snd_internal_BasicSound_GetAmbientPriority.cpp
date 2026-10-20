#include "common.h"

extern "C" {

struct Sound;
typedef struct SoundVtbl {
    /* 0x0 */ void *unk0[3];
    /* 0xC */ void (*getAmbientPriority)(struct Sound *sound, u32 a, u32 b);
} SoundVtbl;

typedef struct Sound {
    /* 0x0 */ SoundVtbl *vtbl;
} Sound;

typedef struct Handle {
    /* 0x0 */ Sound *sound;
    /* 0x4 */ u8 unk4[8];
    /* 0xC */ u32 id;
} Handle;

void nw_snd_internal_BasicSound_GetAmbientPriority(Handle *handle, u32 out)
{
    Sound *sound = handle->sound;

    if (sound != NULL) {
        sound->vtbl->getAmbientPriority(sound, handle->id, out);
        return;
    }
}

} /* extern "C" */
