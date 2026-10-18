/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002de978` (_code @ 0x2de978, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0025721c(unsigned int);
/* Supplied declaration required: FUN_0025722c. */
/* Supplied declaration required: FUN_0025733c. */
/* Supplied declaration required: FUN_00257390. */
/* Supplied declaration required: FUN_002691f0. */
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_0031a9a8. */


int FUN_002de978(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0;
  FUN_0031a9a8();
  temp_v1 = *(unsigned int *)(param_1 + 0x13c);
  FUN_002691f0();
  *(unsigned int *)(temp_v0 + 0x13c) = temp_v1;
  FUN_002bcf58(temp_v0 + 0x30,param_1 + 0x30,0x10c);
  if (*(int *)(param_1 + 0x144) != 0) {
    if (*(int *)(temp_v0 + 0x144) != 0) {
      FUN_00257390();
    }
    temp_v1 = *(unsigned int *)(param_1 + 0x144);
    FUN_0025722c();
    *(unsigned int *)(temp_v0 + 0x144) = temp_v1;
  }
  else if (*(int *)(param_1 + 0x140) != 0) {
    if (*(int *)(temp_v0 + 0x140) != 0) {
      FUN_0025733c();
    }
    temp_v1 = FUN_0025721c(*(unsigned int *)(param_1 + 0x140));
    *(unsigned int *)(temp_v0 + 0x140) = temp_v1;
  }
  return temp_v0;
}
