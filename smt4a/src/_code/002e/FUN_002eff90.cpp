/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eff90` (_code @ 0x2eff90, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00558490; /* 0x558490 */

extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002e7614(int, unsigned int);


unsigned int * FUN_002eff90(unsigned int *param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  *param_1 = (unsigned int)&DAT_00558490;
  temp_v0 = FUN_002e760a(0x20);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002e7614(temp_v0,param_2);
  }
  param_1[2] = temp_v1;
  *(unsigned char *)(param_1 + 1) = 0;
  param_1[3] = 0;
  return param_1;
}

} /* extern "C" */
