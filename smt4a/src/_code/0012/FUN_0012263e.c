/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012263e` (_code @ 0x12263e, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002fd0a0. */
extern int FUN_0030fba6(int, unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_0012263e(int param_1,unsigned char *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  char *pcVar3;
  unsigned char *pbVar4;
  unsigned int temp_v2;
  
  temp_v1 = FUN_0030fba6(param_1,8,param_3,param_4,param_4);
  if (temp_v1 != 0) {
    temp_v2 = *(int *)(param_1 + 0x10) + 1;
    pcVar3 = (char *)FUN_002fd0a0(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
    temp_v0 = *pcVar3;
    pbVar4 = (unsigned char *)FUN_002fd0a0(*(unsigned int *)(param_1 + 8),*(int *)(param_1 + 0xc) + 1);
    *param_2 = (temp_v0 << ((8 - temp_v2) & 0xff)) | (*pbVar4 >> (temp_v2 & 0xff));
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    return;
  }
  *(unsigned char *)(param_1 + 4) = 1;
  return;
}
