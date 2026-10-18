/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001313e4` (_code @ 0x1313e4, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00148520. */
extern int FUN_001485c4(unsigned int, unsigned int);
extern int FUN_002ac1a0(unsigned int *);


int FUN_001313e4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001485c4(*param_1,param_1[1]);
  if (temp_v0 == 0) {
    temp_v0 = -1;
  }
  else {
    temp_v0 = FUN_002ac1a0(param_1);
    if (temp_v0 != 0) {
      temp_v0 = param_1[1] - 1;
    }
    else {
      FUN_00148520(*param_1,0);
      temp_v0 = -1;
    }
  }
  return temp_v0;
}
