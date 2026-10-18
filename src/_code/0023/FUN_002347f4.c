/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002347f4` (_code @ 0x2347f4, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004221e4; /* 0x4221e4 */

/* Supplied declaration required: FUN_002b9008. */


unsigned int * FUN_002347f4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  *param_1 = (unsigned int)&DAT_004221e4;
  if (0 < *(short *)((int)param_1 + 0x5a)) {
    do {
      FUN_002b9008();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)((int)param_1 + 0x5a));
  }
  *(unsigned short *)((int)param_1 + 0x5a) = 0;
  return param_1;
}
