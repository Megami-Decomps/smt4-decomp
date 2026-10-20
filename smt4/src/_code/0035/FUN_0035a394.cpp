/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035a394` (_code @ 0x35a394, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_0044e458; /* 0x44e458 */
extern unsigned char DAT_0044e459; /* 0x44e459 */
extern unsigned char DAT_0044e45a; /* 0x44e45a */
extern unsigned int DAT_0044e460; /* 0x44e460 */

extern unsigned int nn_dsp_CTR_DSP_UnloadComponent(unsigned int);


void FUN_0035a394(void)

{
  unsigned char temp_v0;
  romwright_code *pcVar2;
  int temp_v1;
  
  temp_v0 = 0;
  if ((DAT_0044e459 & ~DAT_0044e45a) != 0) {
    temp_v1 = 0;
    do {
      pcVar2 = *(romwright_code **)(temp_v1 * 4 + 0x4c6464);
      if (pcVar2 != (romwright_code *)0x0) {
        (*pcVar2)();
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 8);
    if (DAT_0044e459 != 0) {
      nn_dsp_CTR_DSP_UnloadComponent(DAT_0044e460);
      DAT_0044e459 = 0;
    }
    temp_v0 = 1;
    DAT_0044e45a = 1;
  }
  DAT_0044e458 = temp_v0;
  return;
}

} /* extern "C" */
