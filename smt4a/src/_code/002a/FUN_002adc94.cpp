/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002adc94` (_code @ 0x2adc94, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a840(int);
int FUN_002267b0(int, int, unsigned int, int);

/* Supplied declaration required: FUN_0019a840. */
/* Supplied declaration required: FUN_002267b0. */


void FUN_002adc94(unsigned int param_1,int *param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  FUN_002267b0(*param_2,param_2[0x11],param_3,0x10000);
  *(unsigned int *)(*param_2 + 0xc) = 0x2000000;
  *(unsigned int *)(*param_2 + 0x3c) = 1;
  *(unsigned int *)(*param_2 + 0x40) = 1;
  *(unsigned int *)(*param_2 + 0x38) = 0;
  FUN_0019a840(*param_2);
  *(unsigned char *)(param_2 + 0x12) = 1;
  return;
}

} /* extern "C" */
