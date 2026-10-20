#include "common.h"

extern "C" {

struct Body;

typedef struct Voice00439fa4 {
    u8 unk00[5];
    u8 value;                      /* 0x05 */
    u8 unk06[0x62];
    struct Body *body;             /* 0x68 */
} Voice00439fa4;

void nn_snd_CTR_VoiceImpl_SetInterpolationType(struct Body *body, u8 value);

/* Stores the value on the voice, then passes it to nn_snd_CTR_VoiceImpl_SetInterpolationType (the function that follows it) for the voice's body. */
void nn_snd_CTR_Voice_SetInterpolationType(Voice00439fa4 *voice, u8 value)
{
    voice->value = value;
    nn_snd_CTR_VoiceImpl_SetInterpolationType(voice->body, value);
}

} /* extern "C" */
