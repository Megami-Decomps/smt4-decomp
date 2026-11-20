#ifndef SMT4A_NN_DSP_DSPCOMPONENT_H
#define SMT4A_NN_DSP_DSPCOMPONENT_H

#include "nn/dsp/DspComponentState.h"

extern "C" {
/* The target object names the address of DspComponentState::loaded separately. */
extern u8 DAT_00589285;
s32 nn_dsp_CTR_DSP_LoadComponent(s32 *session, u32 imageAddress, s32 size,
                                 u16 programMask, u16 dataMask, u8 *loaded);
} /* extern "C" */

#endif
