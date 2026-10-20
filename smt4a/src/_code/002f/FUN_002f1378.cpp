/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f1378` (_code @ 0x2f1378, 0x4a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002eb530(int);
extern int constructObj00559344(unsigned int *, unsigned int);
extern int FUN_00300690(void);


int FUN_002f1378(int param_1,unsigned char param_2,unsigned int param_3,unsigned int param_4)

{
  int temp_v0;
  int temp_v1;
  int uStack_18;
  unsigned int uStack_14;
  
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned char *)(param_1 + 0x1c) = 0;
  *(unsigned char *)(param_1 + 0x1d) = param_2;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  uStack_18 = param_3;
  uStack_14 = param_4;
  temp_v0 = FUN_00300690();
  *(int *)(param_1 + 0x14) = temp_v0;
  *(unsigned int *)(temp_v0 + 4) = 0;
  *(int *)(*(int *)(param_1 + 0x14) + 8) = *(int *)(param_1 + 0x14);
  *(int *)(*(int *)(param_1 + 0x14) + 0xc) = *(int *)(param_1 + 0x14);
  temp_v0 = FUN_002eb530(param_1 + 0x20);
  temp_v1 = constructObj00559344((unsigned int *)&uStack_18,1);
  *(unsigned short *)(temp_v0 + 4) = *(unsigned short *)(temp_v1 + 4);
  return temp_v0 - 0x20;
}

} /* extern "C" */
