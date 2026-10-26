/* NON_MATCHING: register allocation/scheduling only (retail keeps 255 in r4 for the fifth argument and loads the image/size constants first) */
/* Loads the DSP sound component from the embedded binary into the shared DSP state. Fails with 0xC8A0A7FC when the DSP
 * session is not open or the component is already loaded. */
#include "common.h"

extern "C" {
struct DspComponentState {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 loaded;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u16 programMask;
    /* 0x06 */ u16 dataMask;
    /* 0x08 */ s32 session;
    /* 0x0C */ u8 unk0c[0xC];
    /* 0x18 */ const u8 *image;
    /* 0x1C */ u32 imageSize;
};

extern DspComponentState g_callbackState;
extern u8 DAT_004657b8[];
extern s8 DAT_0044e459;
u32 nn_dsp_CTR_DSP_LoadComponent(s32 session, const u8 *image, u32 size, u16 programMask, u16 dataMask, s8 *loaded);

u32 FUN_0011bf24(void)
{
    DspComponentState *callbackStatePtr = &g_callbackState;
    const u8 *image = DAT_004657b8;
    u32 imageSize = 0xC20A;
    u16 programMask = 0xFF;
    u16 dataMask = 0xFF;
    callbackStatePtr->image = image;
    callbackStatePtr->imageSize = imageSize;
    callbackStatePtr->programMask = programMask;
    callbackStatePtr->dataMask = dataMask;
    if (callbackStatePtr->session != 0 && callbackStatePtr->loaded == 0) {
        return nn_dsp_CTR_DSP_LoadComponent(callbackStatePtr->session, image, imageSize, programMask, dataMask,
                                            &DAT_0044e459);
    }
    return 0xC8A0A7FC;
}
}
