/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00412aec` (_code @ 0x412aec, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_001bc2ec(int);
/* Supplied declaration required: FUN_00341e80. */
/* Supplied declaration required: rt_memcpy. */


void FUN_00412aec(int param_1,unsigned int *param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = param_4 << 1;
  temp_v1 = temp_v0;
  FUN_00341e80(temp_v0);
  rt_memcpy(temp_v1,*(int *)(param_1 + 0x48) + param_3 * 2,temp_v0);
  temp_v2 = FUN_001bc2ec(temp_v1);
  *param_2 = temp_v2;
  param_2[1] = param_4;
  *(unsigned char *)(param_2 + 2) = 0;
  return;
}
