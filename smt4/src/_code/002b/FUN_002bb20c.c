/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb20c` (_code @ 0x2bb20c, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_0044e459; /* 0x44e459 */
extern unsigned char DAT_0044e45a; /* 0x44e45a */
extern unsigned int DAT_0044e460; /* 0x44e460 */

/* Supplied declaration required: nn_dsp_CTR_DSP_UnloadComponent. */


void FUN_002bb20c(void)

{
/* irregular: 1 native warning(s); review required */
  romwright_code *pcVar1;
  int temp_v0;
  
  if ((DAT_0044e459 & ~DAT_0044e45a) != 0) {
    temp_v0 = 0;
    do {
      pcVar1 = *(romwright_code **)(temp_v0 * 4 + 0x4c6464);
      if (pcVar1 != (romwright_code *)0x0) {
        (*pcVar1)();
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 8);
    if (DAT_0044e459 != 0) {
      nn_dsp_CTR_DSP_UnloadComponent(DAT_0044e460);
      DAT_0044e459 = 0;
    }
    DAT_0044e45a = 1;
  }
  return;
}
