/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017d158` (_code @ 0x17d158, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6354(unsigned int, int);

/* Supplied declaration required: FUN_002e6354. */


void FUN_0017d158(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  *(unsigned int *)(param_1 + 0xa0) = 0;
  temp_v0 = *(unsigned int *)(param_1 + 0x9c) ^ 1;
  *(unsigned int *)(param_1 + 0x9c) = temp_v0;
  *(unsigned int *)(param_1 + 0xa4) = 0;
  param_1 = param_1 + temp_v0 * 0x4c;
  if ((param_1 != -4) && ((*(int *)(param_1 + 8) != 0 || (*(int *)(param_1 + 0x1c) != 0)))) {
    FUN_002e6354(*(unsigned int *)(param_1 + 0x1c),*(int *)(param_1 + 0x24) * 0x1c);
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(unsigned int *)(param_1 + 0x14) = 0;
    *(unsigned int *)(param_1 + 0x24) = 0;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    *(unsigned int *)(param_1 + 0x18) = 0;
    *(unsigned int *)(param_1 + 0x28) = 0;
    *(unsigned int *)(param_1 + 0x38) = 0;
    *(unsigned int *)(param_1 + 0x34) = 0;
  }
  return;
}

} /* extern "C" */
