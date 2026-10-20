#include "common.h"

extern "C" {

typedef struct FxDelay {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ s32 delay;
    /* 0x48 */ u8 unk48[0x15];
    /* 0x5D */ u8 channels;
} FxDelay;

/* Returns the memory the delay effect needs: delay * channels * 0x280 plus a 0x20-byte header. */
s32 nw_snd_FxDelay_GetRequiredMemSize(FxDelay *fx)
{
    return fx->delay * (u32)fx->channels * 0x280 + 0x20;
}

} /* extern "C" */
