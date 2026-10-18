/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00263e60` (_code @ 0x263e60, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004221d8; /* 0x4221d8 */

/* Supplied declaration required: FUN_002b9008. */


unsigned int * FUN_00263e60(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  *param_1 = (unsigned int)&DAT_004221d8;
  if (0 < *(short *)(param_1 + 0xc)) {
    do {
      FUN_002b9008();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0xc));
  }
  *(unsigned short *)(param_1 + 0xc) = 0;
  return param_1;
}
