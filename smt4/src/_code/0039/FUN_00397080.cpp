/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00397080` (_code @ 0x397080, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003970ac(int, unsigned int);

/* Supplied declaration required: FUN_003970ac. */


void FUN_00397080(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_003970ac(param_1,*(unsigned int *)(param_1 + 4));
  temp_v0 = param_1 + 8;
  *(int *)(param_1 + 0x10) = temp_v0;
  *(int *)(param_1 + 4) = temp_v0;
  *(int *)(param_1 + 0x1c) = temp_v0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(int *)(param_1 + 0x18) = temp_v0;
  return;
}

} /* extern "C" */
