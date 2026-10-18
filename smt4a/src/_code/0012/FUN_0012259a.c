/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012259a` (_code @ 0x12259a, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002fd0a0. */


void FUN_0012259a(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned char *pbVar3;
  unsigned char *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v2 = *(unsigned int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 7) {
    temp_v1 = *(int *)(param_1 + 0x10) + 1;
    temp_v3 = 8 - temp_v1;
    pbVar3 = (unsigned char *)FUN_002fd0a0(temp_v2,*(unsigned int *)(param_1 + 0xc),temp_v2,temp_v3,param_4);
    temp_v0 = *pbVar3;
    pbVar3 = (unsigned char *)FUN_002fd0a0(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
    *pbVar3 = temp_v0 | (unsigned char)(param_2 >> (temp_v3 & 0xff));
    puVar4 = (unsigned char *)FUN_002fd0a0(*(unsigned int *)(param_1 + 8),*(int *)(param_1 + 0xc) + 1);
    *puVar4 = (char)(param_2 << (temp_v1 & 0xff));
  }
  else {
    puVar4 = (unsigned char *)FUN_002fd0a0(temp_v2,*(unsigned int *)(param_1 + 0xc),temp_v2,param_4,param_4);
    *puVar4 = (char)param_2;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
  return;
}
