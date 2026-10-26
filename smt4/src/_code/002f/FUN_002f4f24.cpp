/* NON_MATCHING: retail loads the module address before the frame check and again for the cue table, and orders its two literals module-first. */
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

typedef struct SoundCue {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u16 pan;       /* 0 = left, 1 = right, else centered */
    /* 0x0A */ u16 volume;
} SoundCue;

typedef struct SoundChannel {
    /* 0x00 */ u8 state;      /* 2 = finished */
    /* 0x01 */ u8 unk01[0x77];
} SoundChannel;

typedef struct SoundCueModule {
    /* 0x000 */ SoundChannel channels[4];
    /* 0x1E0 */ SoundCue *cues;
    /* 0x1E4 */ u8 flags;
} SoundCueModule;

s32 FUN_002bfc24(s32 mode, u32 sound, u8 volume, u8 flags, f32 left, f32 right);
u32 FUN_00100bd4(SoundCue *cue);

extern SoundCueModule DAT_004c5634;
extern u32 DAT_0044e128; /* channel of the cue started last */

/* Script command: on its first frame starts cue `index` panned by the cue (fails, returning 1, for
 * a bad cue or channel); on later frames returns 1 once that channel has finished. */
s32 FUN_002f4f24(u32 index)
{
    if (scrGetCommandFrame() != 0) {
        SoundChannel *channel = DAT_0044e128 < 4 ? &DAT_004c5634.channels[DAT_0044e128] : NULL;
        if (channel->state == 2) {
            return 1;
        }
        return 0;
    } else if (index < 16 && DAT_004c5634.cues != NULL) {
        SoundCue *cue = &DAT_004c5634.cues[index];
        if (cue != NULL) {
            u8 flags = DAT_004c5634.flags | 4;
            u32 sound = FUN_00100bd4(cue);
            u8 volume = cue->volume;
            f32 left;
            f32 right;
            if (cue->pan == 0) {
                left = 0.707f;
                right = 0.1f;
            } else if (cue->pan == 1) {
                left = 0.1f;
                right = 0.707f;
            } else {
                left = 0.707f;
                right = 0.707f;
            }
            DAT_0044e128 = FUN_002bfc24(1, sound, volume, flags, left, right);
            if (DAT_0044e128 != (u32)-1) {
                return 0;
            }
        }
    }
    return 1;
}

} /* extern "C" */
