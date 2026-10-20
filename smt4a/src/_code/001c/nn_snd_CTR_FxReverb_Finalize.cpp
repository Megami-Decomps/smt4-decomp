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

/* Finalizes the effect: if it was initialized, clears the flag and the ten buffer fields. */
void nn_snd_CTR_FxReverb_Finalize(FxReverb *fx)
{
    if (fx->initialized != 0) {
        fx->initialized = 0;
        fx->unk03C = 0;
        fx->unk04C = 0;
        fx->unk05C = 0;
        fx->unk060 = 0;
        fx->unk07C = 0;
        fx->unk040 = 0;
        fx->unk050 = 0;
        fx->unk064 = 0;
        fx->unk068 = 0;
        fx->unk080 = 0;
    }
}

} /* extern "C" */
