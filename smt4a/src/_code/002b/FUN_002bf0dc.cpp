/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf0dc` (_code @ 0x2bf0dc, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001861ac(void);


void FUN_002bf0dc(unsigned int param_1,int param_2,unsigned int *param_3)

{
  int temp_v0;
  unsigned short *puVar2;
  
  temp_v0 = FUN_001861ac();
  puVar2 = (unsigned short *)(**(int **)(temp_v0 + 4) + (param_2 % 1000) * 0x14);
  *param_3 = (unsigned int)puVar2[1];
  param_3[1] = (unsigned int)puVar2[1] + (puVar2[3] & 0xffff7fff);
  param_3[2] = (unsigned int)*puVar2;
  param_3[3] = (unsigned int)*puVar2 + (puVar2[2] & 0xffff7fff);
  return;
}

} /* extern "C" */
