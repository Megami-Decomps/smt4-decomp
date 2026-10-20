#include "common.h"

extern "C" {

typedef struct FxReverb {
    /* 0x000 */ u8 unk000[0x3C];
    /* 0x03C */ u32 unk03C;
    /* 0x040 */ u32 unk040;
    /* 0x044 */ u8 unk044[8];
    /* 0x04C */ u32 unk04C;
    /* 0x050 */ u32 unk050;
    /* 0x054 */ u8 unk054[8];
    /* 0x05C */ u32 unk05C;
    /* 0x060 */ u32 unk060;
    /* 0x064 */ u32 unk064;
    /* 0x068 */ u32 unk068;
    /* 0x06C */ u8 unk06C[0x10];
    /* 0x07C */ u32 unk07C;
    /* 0x080 */ u32 unk080;
    /* 0x084 */ u8 unk084[0x80];
    /* 0x104 */ u8 initialized;
} FxReverb;

void nn_snd_CTR_FxReverb_Finalize(FxReverb *reverb)
{
    if (reverb->initialized != 0) {
        reverb->initialized = 0;
        reverb->unk03C = 0;
        reverb->unk04C = 0;
        reverb->unk05C = 0;
        reverb->unk060 = 0;
        reverb->unk07C = 0;
        reverb->unk040 = 0;
        reverb->unk050 = 0;
        reverb->unk064 = 0;
        reverb->unk068 = 0;
        reverb->unk080 = 0;
    }
}

} /* extern "C" */
