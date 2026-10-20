/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00356d98` (_code @ 0x356d98, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int * FUN_00356d98(unsigned int *param_1,int param_2)

{
  unsigned int *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0x10040;
  param_1[2] = 0xe40100;
  param_1[3] = 0x30100;
  param_1[4] = 0x1010000;
  param_1[5] = 0xf0101;
  param_1[6] = 0;
  param_1[7] = 0x10104;
  param_1[8] = 0;
  param_1[9] = 0x10105;
  param_1[10] = 0xf40;
  puVar1 = param_1 + 0xc;
  param_1[0xb] = 0xf0107;
  if (param_2 != 0) {
    *puVar1 = 1;
    param_1[0xd] = 0xf0111;
    param_1[0xe] = 1;
    param_1[0xf] = 0xf0110;
    puVar1 = param_1 + 0x10;
  }
  *puVar1 = 0xf;
  puVar1[1] = 0x80310112;
  puVar1[2] = 0xf;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return puVar1 + 6;
}

} /* extern "C" */
