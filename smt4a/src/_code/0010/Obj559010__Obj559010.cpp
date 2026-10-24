/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN9Obj559010C1Ev` (_code @ 0x10cc7c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559018; /* 0x559018 */

extern int FUN_002e7168(unsigned int *, unsigned int);


void _ZN9Obj559010C1Ev(unsigned int *param_1)

{
  int temp_v0;
  
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (unsigned int)&DAT_00559018;
  temp_v0 = FUN_002e7168(param_1 + 7,0x20000000);
  *(unsigned char *)(temp_v0 - 0x18) = 0;
  *(unsigned int *)(temp_v0 - 0xc) = 0;
  *(unsigned int *)(temp_v0 - 8) = 0;
  *(unsigned int *)(temp_v0 - 0x14) = 0;
  *(unsigned short *)(temp_v0 - 4) = 0xffff;
  *(unsigned short *)(temp_v0 - 2) = 0xffff;
  return;
}

} /* extern "C" */
