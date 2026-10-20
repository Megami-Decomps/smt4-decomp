/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001251dc` (_code @ 0x1251dc, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bc0e0(void);
int FUN_002c43b4(unsigned int, int);
int FUN_002c58c8(int);
int FUN_002c5914(int);

/* Supplied declaration required: FUN_002bc0e0. */
/* Supplied declaration required: FUN_002c43b4. */
/* Supplied declaration required: FUN_002c58c8. */
/* Supplied declaration required: FUN_002c5914. */


unsigned int FUN_001251dc(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  param_1 = (unsigned int *)*param_1;
  temp_v0 = param_1[2];
  if (temp_v0 != 0) {
    if ((temp_v0 != 1) && (temp_v0 == 99)) {
      FUN_002c43b4(*param_1,0);
    }
  }
  else {
    FUN_002c5914(0);
    FUN_002c58c8(0);
    FUN_002bc0e0();
    param_1[2] = param_1[2] + 1;
  }
  return 0;
}

} /* extern "C" */
