/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301454` (_code @ 0x301454, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00594965; /* 0x594965 */
extern unsigned int DAT_005949ec; /* 0x5949ec */

extern int FUN_002f8548(unsigned int);


int FUN_00301454(int param_1)

{
  int temp_v0;
  
  if ((DAT_00594965 != '\0') && (temp_v0 = FUN_002f8548(DAT_005949ec), temp_v0 != 0)) {
    return *(int *)(param_1 + 8) + temp_v0 * 300;
  }
  return param_1 + 0xc;
}
