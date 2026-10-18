/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105a54` (_code @ 0x105a54, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_005587c4; /* 0x5587c4 */

/* Supplied declaration required: FUN_002eb7c0. */
/* Supplied declaration required: FUN_002ec9f4. */


void FUN_00105a54(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_005587c4;
  if ((int *)param_1[0x10] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x10] + 4))();
  }
  temp_v0 = FUN_002ec9f4(param_1 + 0x1c);
  temp_v0 = FUN_002ec9f4(temp_v0 - 0x2c);
  FUN_002eb7c0(temp_v0 - 0x44);
  return;
}
