/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6d54` (_code @ 0x3f6d54, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_0044e994; /* 0x44e994 */

/* Supplied declaration required: FUN_003b3380. */


unsigned int FUN_003f6d54(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (DAT_0044e994 == (romwright_code *)0x0) {
    temp_v0 = 0x12;
  }
  else if (param_1 == (unsigned int *)0x0) {
    temp_v0 = 1;
  }
  else {
    FUN_003b3380(param_1[1]);
    (*DAT_0044e994)(param_1[1]);
    (*DAT_0044e994)(*param_1);
    (*DAT_0044e994)(param_1);
    temp_v0 = 0;
  }
  return temp_v0;
}
