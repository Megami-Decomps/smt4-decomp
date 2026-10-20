/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129084` (_code @ 0x129084, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e7c0; /* 0x44e7c0 */
extern unsigned char DAT_0044e7c1; /* 0x44e7c1 */
extern unsigned char DAT_0044e7c2; /* 0x44e7c2 */
extern unsigned char DAT_0044e7c8; /* 0x44e7c8 */
extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

extern void nn_os_LightEvent_Initialize(unsigned int, unsigned char);
extern void nn_snd_CTR_Dspsnd_Finalize(unsigned int, unsigned char);


void FUN_00129084(void)

{
  if ((DAT_0044e7c0 & ~DAT_0044e7c1) != 0) {
    nn_os_LightEvent_Initialize((unsigned int)&DAT_0044e7c8,1);
    DAT_0044e7c2 = 1;
    nn_snd_CTR_Dspsnd_Finalize((unsigned int)&DAT_004e6f64,1);
    DAT_0044e7c1 = 1;
  }
  return;
}

} /* extern "C" */
