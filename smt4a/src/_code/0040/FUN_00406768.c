/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00406768` (_code @ 0x406768, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00406768(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned char *pbVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)(*(int *)(param_1 + 0x108) + param_2 * 8);
  *puVar2 = param_3;
  *(unsigned char *)(puVar2 + 1) = 1;
  pbVar1 = (unsigned char *)(*(int *)(param_1 + 0x10) + (param_2 & 0xffff) * 0x278);
  *pbVar1 = *pbVar1 | 1;
  return;
}
