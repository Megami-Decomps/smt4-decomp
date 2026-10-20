/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121240` (_code @ 0x121240, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00121240(int param_1,int param_2)

{
  unsigned char temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(unsigned char *)(param_1 + 0x1c);
  *(unsigned char *)(param_1 + 0x1c) = *(unsigned char *)(param_2 + 0x1c);
  *(unsigned char *)(param_2 + 0x1c) = temp_v0;
  temp_v1 = *(unsigned int *)(param_1 + 0xc);
  *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_2 + 0xc);
  *(unsigned int *)(param_2 + 0xc) = temp_v1;
  return;
}

} /* extern "C" */
