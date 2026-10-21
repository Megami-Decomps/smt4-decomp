#include "common.h"

struct Voice;

struct VoiceOwner {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ Voice *voice;
};

extern "C" {

extern void nw_snd_internal_driver_Voice_Free(Voice *voice);

/* Releases or detaches a voice according to the completion event. */
void FUN_0015c7dc(Voice *voice, u32 event, VoiceOwner *owner)
{
    switch (event) {
    case 0:
    case 1:
        nw_snd_internal_driver_Voice_Free(voice);
        owner->voice = NULL;
        break;
    case 2:
    case 3:
        owner->voice = NULL;
        break;
    }
}

} /* extern "C" */
