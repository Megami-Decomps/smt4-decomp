/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f244` (_code @ 0x30f244, 0x15c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001f7090. */
/* Supplied declaration required: FUN_0021a280. */
/* Supplied declaration required: FUN_00249508. */
/* Supplied declaration required: FUN_002de3b0. */
/* Supplied declaration required: FUN_002e7b44. */
/* Supplied declaration required: FUN_00302674. */
/* Supplied declaration required: FUN_0030269c. */
/* Supplied declaration required: FUN_0030ee5c. */
/* Supplied declaration required: FUN_0031d20c. */


void FUN_0030f244(int *param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  
  if (param_1[0xb] == 0) {
    temp_v0 = *param_1;
    FUN_001f7090();
    param_1[0xb] = temp_v0;
    *(int *)(temp_v0 + 0x4c) = param_1[0xc];
  }
  switch(param_2) {
  case 1:
    FUN_00249508(param_1[0xb],*param_1,param_2);
    FUN_0030269c(param_1[0xb],param_3);
    break;
  case 2:
    FUN_00249508(param_1[0xb],*param_1,param_2);
    FUN_00302674(param_1[0xb],param_3);
    break;
  case 4:
    FUN_00249508(param_1[0xb],*param_1,param_2);
    FUN_0031d20c(param_1[0xb],*param_3);
    break;
  case 5:
    FUN_0021a280(param_1[0xb],param_3);
    break;
  case 6:
    FUN_002e7b44(param_1[0xb],param_3);
    break;
  case 7:
    FUN_00249508(param_1[0xb],*param_1,param_2);
    FUN_002de3b0(param_1[0xb],param_3);
    break;
  case 9:
    FUN_00249508(param_1[0xb],*param_1,param_2);
    FUN_0030ee5c(param_1[0xb],param_3);
  }
  *(short *)(param_1[0xb] + 0xc) = (short)param_2;
  return;
}
