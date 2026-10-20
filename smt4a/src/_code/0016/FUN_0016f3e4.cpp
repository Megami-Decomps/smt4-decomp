/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016f3e4` (_code @ 0x16f3e4, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_LightEvent_Initialize(unsigned char *, int);

extern unsigned char DAT_005894e4; /* 0x5894e4 */
extern unsigned char DAT_005894e5; /* 0x5894e5 */
extern unsigned char DAT_005894e6; /* 0x5894e6 */
extern unsigned char DAT_005894ec; /* 0x5894ec */
extern unsigned char g_dspsndState; /* 0x6433d0 */

/* Supplied declaration required: nn_os_LightEvent_Initialize. */
extern void nn_snd_CTR_Dspsnd_Finalize(unsigned int, unsigned char);


void FUN_0016f3e4(void)

{
/* irregular: 1 native warning(s); review required */
  if ((DAT_005894e4 & ~DAT_005894e5) != 0) {
    nn_os_LightEvent_Initialize(&DAT_005894ec,1);
    DAT_005894e6 = 1;
    nn_snd_CTR_Dspsnd_Finalize((unsigned int)&g_dspsndState,1);
    DAT_005894e5 = 1;
  }
  return;
}

} /* extern "C" */
