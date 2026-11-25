#ifndef SMT4_NN_DSP_DSPCOMPONENT_H
#define SMT4_NN_DSP_DSPCOMPONENT_H

#include "nn/dsp/DspComponentState.h"

extern "C" {
/* Loads the image into an open DSP session and reports its load status. */
u32 nn_dsp_CTR_DSP_LoadComponent(u32 *session, const u8 *image, u32 size,
                                 u16 programMask, u16 dataMask, u8 *loaded);
} /* extern "C" */

#endif
