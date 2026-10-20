/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4664` (_code @ 0x2a4664, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


void FUN_002a4664(unsigned int *param_1)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f698 + 0x4));
  *param_1 = *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x27e98);
  param_1[1] = *(unsigned int *)(temp_v0 + 0x27e9c);
  param_1[2] = *(unsigned int *)(temp_v0 + 0x27ea0);
  *(unsigned short *)(param_1 + 3) = *(unsigned short *)(temp_v0 + 0x27ea4);
  return;
}

} /* extern "C" */
