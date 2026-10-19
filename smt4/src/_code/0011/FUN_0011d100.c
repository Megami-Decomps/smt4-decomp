/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d100` (_code @ 0x11d100, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00471a70; /* 0x471a70 */
extern unsigned int DAT_00471a84; /* 0x471a84 */

extern unsigned int nn_gxlow_CTR_Gpu_SetLcdForceBlack(unsigned int, unsigned char);


void FUN_0011d100(void)

{
  if (DAT_00471a70 != '\0') {
    nn_gxlow_CTR_Gpu_SetLcdForceBlack((unsigned int)&DAT_00471a84,0);
    return;
  }
  return;
}
