/* NON_MATCHING: stm of the image/size pair, the g_callbackState+1 pool word and frame now match retail; retail loads the image literal into r1 before the size literal into r2 (pool order image, size), the build loads size first */
/* Loads the DSP sound component from the embedded binary into the shared DSP state. Fails with 0xC8A0A7FC when the DSP
 * session is not open or the component is already loaded. */
#include "common.h"

extern "C" {
struct DspComponentImage {
    const u8 *data;
    u32 size;
};

struct DspComponentState {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 loaded;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u16 programMask;
    /* 0x06 */ u16 dataMask;
    /* 0x08 */ s32 session;
    /* 0x0C */ u8 unk0c[0xC];
    /* 0x18 */ DspComponentImage image;
};

extern DspComponentState g_callbackState;
extern u8 DAT_004657b8[];
u32 nn_dsp_CTR_DSP_LoadComponent(s32 session, const u8 *image, u32 size, u16 programMask, u16 dataMask, s8 *loaded);

static inline void setImage(DspComponentImage *slot, const u8 *data, u32 size)
{
    DspComponentImage value = { data, size };
    *slot = value;
}

u32 FUN_0011bf24(void)
{
    DspComponentState *callbackStatePtr = &g_callbackState;
    const u8 *image = DAT_004657b8;
    u32 imageSize = 0xC20A;
    u16 programMask = 0xFF;
    u16 dataMask = 0xFF;
    setImage(&callbackStatePtr->image, image, imageSize);
    callbackStatePtr->programMask = programMask;
    callbackStatePtr->dataMask = dataMask;
    if (callbackStatePtr->session != 0 && callbackStatePtr->loaded == 0) {
        return nn_dsp_CTR_DSP_LoadComponent(callbackStatePtr->session, image, imageSize, programMask, dataMask,
                                            &g_callbackState.loaded);
    }
    return 0xC8A0A7FC;
}
}
