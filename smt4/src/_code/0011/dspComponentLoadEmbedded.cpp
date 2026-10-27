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

/* Records the DSP component image and loads it once a DSP session exists and nothing is loaded yet. */
static __inline u32 dspComponentLoad(const u8 *data, u32 size, u16 programMask, u16 dataMask)
{
    g_callbackState.image.data = data;
    g_callbackState.image.size = size;
    g_callbackState.programMask = programMask;
    g_callbackState.dataMask = dataMask;
    if (g_callbackState.session != 0 && g_callbackState.loaded == 0) {
        return nn_dsp_CTR_DSP_LoadComponent(g_callbackState.session, data, size, programMask, dataMask,
                                            &g_callbackState.loaded);
    }
    return 0xC8A0A7FC;
}

u32 dspComponentLoadEmbedded(void)
{
    return dspComponentLoad(DAT_004657b8, 0xC20A, 0xFF, 0xFF);
}
}
