/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011e330` (_code @ 0x11e330, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00303a2e(int, int);
int FUN_00306d38(int, int);

/* Supplied declaration required: FUN_00303a2e. */
/* Supplied declaration required: FUN_00306d38. */


int FUN_0011e330(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  *(unsigned char *)(param_1 + 4) = *(unsigned char *)(param_2 + 4);
  temp_v0 = *(unsigned int *)(param_2 + 8);
  *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_2 + 0xc);
  *(unsigned int *)(param_1 + 8) = temp_v0;
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_2 + 0x10);
  FUN_00306d38(param_1 + 0x14,param_2 + 0x14);
  temp_v0 = *(unsigned int *)(param_2 + 0x28);
  *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_2 + 0x2c);
  *(unsigned int *)(param_1 + 0x28) = temp_v0;
  FUN_00303a2e(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}

} /* extern "C" */
