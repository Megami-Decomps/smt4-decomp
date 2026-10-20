/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001327b4` (_code @ 0x1327b4, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559524; /* 0x559524 */
extern unsigned char DAT_00559ef4; /* 0x559ef4 */

extern int onlineStringCopyConstruct(int *, int);
extern int *FUN_0030710c(int, unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_001327b4(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  
  temp_v1 = **(int **)(param_1 + 0x10);
  piVar1 = (int *)FUN_0030710c(param_1,0,param_3,param_4,param_4);
  piVar1[2] = (int)&DAT_00559ef4;
  *(unsigned char *)(piVar1 + 3) = *(unsigned char *)(param_2 + 4);
  piVar1[4] = *(int *)(param_2 + 8);
  piVar1[5] = *(int *)(param_2 + 0xc);
  piVar1[6] = *(int *)(param_2 + 0x10);
  piVar1[7] = *(int *)(param_2 + 0x14);
  temp_v0 = onlineStringCopyConstruct(piVar1 + 8,param_2 + 0x18);
  *(unsigned int *)(temp_v0 + 8) = *(unsigned int *)(param_2 + 0x20);
  *(unsigned char **)(temp_v0 - 0x18) = &DAT_00559524;
  *piVar1 = temp_v1;
  piVar1[1] = *(int *)(temp_v1 + 4);
  **(int **)(temp_v1 + 4) = (int)piVar1;
  *(int **)(temp_v1 + 4) = piVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}

} /* extern "C" */
