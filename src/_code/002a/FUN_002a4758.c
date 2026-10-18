/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4758` (_code @ 0x2a4758, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bae30. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */


int FUN_002a4758(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1 + 0x2c;
  FUN_002c38a4(temp_v1);
  if (*(int *)(param_1 + param_2 * 0xc) != 0) {
    temp_v0 = *(int *)(param_1 + param_2 * 0xc + 4);
    if (param_3 != 0) {
      FUN_002bae30();
    }
    FUN_002c3820(temp_v1);
    return temp_v0 - 4;
  }
  FUN_002c3820(temp_v1);
  return 0;
}
