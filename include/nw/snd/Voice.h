/* nw::snd::internal::driver::Voice: the fields the matched setters touch. Every setter stores a new
 * value and raises a bit in updateFlags so the voice is re-synced on the next frame. */
#ifndef NW_SND_VOICE_H
#define NW_SND_VOICE_H

#include "common.h"

typedef struct nw_snd_internal_driver_Voice {
    /* 0x00 */ u8 unk00[0x17];
    /* 0x17 */ s8 pause;          /* nonzero while paused */
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ u16 updateFlags;   /* VOICE_UPDATE_* bits pending for the next sync */
    /* 0x22 */ u8 unk22[2];
    /* 0x24 */ f32 volume;
    /* 0x28 */ u8 unk28[0x20];
    /* 0x48 */ f32 fxSend[3];     /* per-FX-bus send level */
} nw_snd_internal_driver_Voice;

#define VOICE_UPDATE_PAUSE   0x02
#define VOICE_UPDATE_FX_SEND 0x08
#define VOICE_UPDATE_VOLUME  0x40

#endif
