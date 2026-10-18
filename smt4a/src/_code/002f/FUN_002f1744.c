/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f1744` (_code @ 0x2f1744, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055b134; /* 0x55b134 */

extern int FUN_002fd5d4(unsigned int *, unsigned int);


void FUN_002f1744(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055b134;
  temp_v0 = FUN_002fd5d4(param_1 + 2,param_3);
  *(unsigned int *)(temp_v0 + 0x6c) = 0;
  *(unsigned char *)(temp_v0 + 0x84) = 0;
  *(unsigned int *)(temp_v0 + 0x68) = 0;
  *(unsigned int *)(temp_v0 + 0x74) = 0;
  *(unsigned int *)(temp_v0 - 4) = param_2;
  *(unsigned int *)(temp_v0 + 0x70) = 0;
  *(unsigned int *)(temp_v0 + 0x78) = 0;
  *(unsigned char *)(temp_v0 + 0x7c) = 0;
  return;
}
