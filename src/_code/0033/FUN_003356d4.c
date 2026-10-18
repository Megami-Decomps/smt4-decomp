/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003356d4` (_code @ 0x3356d4, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00420338; /* 0x420338 */

/* Supplied declaration required: FUN_002a7aa0. */
/* Supplied declaration required: FUN_002c4360. */


unsigned int * FUN_003356d4(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  *param_1 = (unsigned int)&DAT_00420338;
  do {
    if (param_1[temp_v0 * 0x14 + 6] != 0) {
      FUN_002a7aa0();
      param_1[temp_v0 * 0x14 + 6] = 0;
    }
    if (param_1[temp_v0 * 0x14 + 7] != 0) {
      FUN_002c4360();
      param_1[temp_v0 * 0x14 + 7] = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  if (param_1[2] != 0) {
    FUN_002a7aa0();
    param_1[2] = 0;
  }
  return param_1;
}
