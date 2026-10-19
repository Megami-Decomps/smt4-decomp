/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00431524` (_code @ 0x431524, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00589284; /* 0x589284 */
extern unsigned char DAT_00589285; /* 0x589285 */
extern unsigned char DAT_00589286; /* 0x589286 */
extern unsigned int DAT_0058928c; /* 0x58928c */

extern unsigned int nn_dsp_CTR_DSP_UnloadComponent(unsigned int);


void FUN_00431524(void)

{
  unsigned char temp_v0;
  romwright_code *pcVar2;
  int temp_v1;
  
  temp_v0 = 0;
  if ((DAT_00589285 & ~DAT_00589286) != 0) {
    temp_v1 = 0;
    do {
      pcVar2 = *(romwright_code **)(temp_v1 * 4 + 0x61a644);
      if (pcVar2 != (romwright_code *)0x0) {
        (*pcVar2)();
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 8);
    if (DAT_00589285 != 0) {
      nn_dsp_CTR_DSP_UnloadComponent(DAT_0058928c);
      DAT_00589285 = 0;
    }
    temp_v0 = 1;
    DAT_00589286 = 1;
  }
  DAT_00589284 = temp_v0;
  return;
}
