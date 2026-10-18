/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001003ea` (_code @ 0x1003ea, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002e31ea. */
/* Supplied declaration required: FUN_002e3216. */


void FUN_001003ea(int *param_1,unsigned char *param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  
  if (param_3 != 1) {
    if (*param_1 << 0x1a < 0) {
      param_3 = param_1[7];
    }
    for (temp_v0 = 0; (temp_v0 < param_3 && (param_2[temp_v0] != '\0')); temp_v0 = temp_v0 + 1) {
    }
  }
  else {
    temp_v0 = 1;
  }
  puVar2 = param_2 + temp_v0;
  param_1[6] = param_1[6] - temp_v0;
  param_1[8] = param_1[8] + temp_v0;
  FUN_002e31ea(param_1);
  for (; param_2 < puVar2; param_2 = param_2 + 1) {
    (*(romwright_code *)param_1[1])(*param_2,param_1[2]);
  }
  FUN_002e3216(param_1);
  return;
}
