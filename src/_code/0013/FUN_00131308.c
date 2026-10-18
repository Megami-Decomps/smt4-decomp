/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00131308` (_code @ 0x131308, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00148438. */
extern int FUN_001484dc(unsigned int, unsigned int);
extern int FUN_002ac42c(unsigned int *);


int FUN_00131308(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001484dc(*param_1,param_1[1]);
  if (temp_v0 == 0) {
    temp_v0 = -1;
  }
  else {
    temp_v0 = FUN_002ac42c(param_1);
    if (temp_v0 != 0) {
      temp_v0 = param_1[1] - 1;
    }
    else {
      FUN_00148438(*param_1,0);
      temp_v0 = -1;
    }
  }
  return temp_v0;
}
