/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4218` (_code @ 0x3e4218, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00236420. */
/* Supplied declaration required: FUN_00236454. */
/* Supplied declaration required: FUN_002364b0. */
extern unsigned int FUN_0036a54c(int);


unsigned int FUN_003e4218(unsigned int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_2 + 8;
  temp_v0 = FUN_0036a54c(temp_v2);
  if ((~*(unsigned int *)(param_2 + 0x44) & 8) != 0) {
    temp_v1 = *(unsigned int *)(param_2 + 0x44) & 0xfffff9ff;
    *(unsigned int *)(param_2 + 0x44) = temp_v1;
    if (((*(float *)(param_2 + 0x38) == *(float *)(param_2 + 0x3c)) &&
        (*(float *)(param_2 + 0x38) == *(float *)(param_2 + 0x40))) &&
       (*(unsigned int *)(param_2 + 0x44) = temp_v1 | 0x400, *(int *)(param_2 + 0x38) == 0x3f800000)) {
      *(unsigned int *)(param_2 + 0x44) = temp_v1 | 0x600;
    }
  }
  FUN_002364b0();
  FUN_00236454(temp_v2);
  FUN_00236420(temp_v2);
  *(unsigned int *)(param_2 + 0x44) = *(unsigned int *)(param_2 + 0x44) | 0x801;
  return temp_v0;
}
