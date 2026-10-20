#include "common.h"

extern "C" {

struct VoiceBody;

typedef struct Voice {
    u8 unk00[7];
    u8 filterFlags;                /* 0x07: bit 0 = mono filter */
    u8 unk08[0x60];
    struct VoiceBody *body;        /* 0x68 */
} Voice;

void FUN_0015a400(struct VoiceBody *body, u8 enable);

/* Updates the voice's mono-filter flag, then passes the flags to FUN_0015a400 (the function that follows it) for the voice's body. */
void nn_snd_CTR_Voice_EnableMonoFilter(Voice *voice, u8 enable)
{
    if (enable) {
        voice->filterFlags |= 1;
    } else {
        voice->filterFlags &= ~1;
    }
    FUN_0015a400(voice->body, voice->filterFlags);
}

} /* extern "C" */
