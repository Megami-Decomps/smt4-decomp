/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fed8c` (_code @ 0x2fed8c, 0x66 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0012d2bc(unsigned int, int *, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002e6dac. */


void FUN_002fed8c(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int *piVar4;
  int temp_v2;
  
  puVar1 = (unsigned char *)param_1[1];
  if (puVar1 != (unsigned char *)0x0) {
    param_1[1] = *(int *)(puVar1 + 0xc);
  }
  else {
    puVar1 = (unsigned char *)param_1[2];
    if (puVar1 == (unsigned char *)param_1[3]) {
      if (*param_1 != 0) {
        temp_v0 = *(unsigned int *)(*param_1 + 4);
      }
      else {
        temp_v0 = 0;
      }
      temp_v1 = FUN_0012d2bc(temp_v0,param_1,param_3,param_4,param_4);
      piVar4 = (int *)FUN_002e6dac(0xc);
      temp_v2 = FUN_002e6dac(temp_v1 * 0x18);
      piVar4[2] = temp_v2;
      temp_v2 = *param_1;
      piVar4[1] = temp_v1;
      *piVar4 = temp_v2;
      *param_1 = (int)piVar4;
      puVar1 = (unsigned char *)piVar4[2];
      param_1[3] = (int)(puVar1 + temp_v1 * 0x18);
      param_1[2] = (int)puVar1;
    }
    param_1[2] = (int)(puVar1 + 0x18);
  }
  *(unsigned int *)(puVar1 + 4) = 0;
  *(unsigned int *)(puVar1 + 8) = 0;
  *(unsigned int *)(puVar1 + 0xc) = 0;
  *puVar1 = 0;
  return;
}
