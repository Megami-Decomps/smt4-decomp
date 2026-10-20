#include "common.h"

extern "C" {

typedef struct FxDelayConfig {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ s32 delayFrames;
    /* 0x48 */ u8 unk48[0x15];
    /* 0x5D */ u8 channelCount;
} FxDelayConfig;

/* Memory needed for the delay line: frames * channels * 0x280 bytes, plus a 0x20 header. */
s32 nw_snd_FxDelay_GetRequiredMemSize(FxDelayConfig *config)
{
    return config->delayFrames * (u32)config->channelCount * 0x280 + 0x20;
}

} /* extern "C" */
