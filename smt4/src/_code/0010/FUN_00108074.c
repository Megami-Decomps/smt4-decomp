/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00108074` (_code @ 0x108074, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00118f1c(int);
extern int FUN_0011921c(void);
/* Supplied declaration required: FUN_002bff38. */
/* Supplied declaration required: FUN_002bff50. */


unsigned int FUN_00108074(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (param_1 != 0) {
    temp_v0 = FUN_0011921c();
    if ((temp_v0 == 0) && (temp_v0 = FUN_00118f1c(param_1), temp_v0 == 0)) {
      FUN_002bff38(2);
    }
  }
  else {
    FUN_002bff50();
  }
  return 1;
}
