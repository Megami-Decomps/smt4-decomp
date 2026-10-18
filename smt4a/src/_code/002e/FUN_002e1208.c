/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1208` (_code @ 0x2e1208, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001861ac(void);


void FUN_002e1208(unsigned int param_1,int param_2,unsigned int *param_3,unsigned int *param_4)

{
  int temp_v0;
  short *psVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_001861ac();
  temp_v0 = **(int **)(temp_v0 + 4) + (param_2 % 1000) * 0x14;
  psVar2 = *(short **)(temp_v0 + 0xc);
  temp_v1 = *(unsigned short *)(temp_v0 + 4) & 0xffff7fff;
  temp_v2 = *(unsigned short *)(temp_v0 + 6) & 0xffff7fff;
  if ((psVar2 != (short *)0x0) && ((psVar2[2] == 1 || ((psVar2[6] & 1U) != 0)))) {
    temp_v1 = (unsigned int)*psVar2;
    temp_v2 = (unsigned int)psVar2[1];
  }
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = temp_v1;
  }
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = temp_v2;
  }
  return;
}
