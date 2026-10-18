/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d0ba4` (_code @ 0x4d0ba4, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055ca1c; /* 0x55ca1c */

/* Supplied declaration required: FUN_001641c4. */


unsigned int * FUN_004d0ba4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  *param_1 = (unsigned int)&DAT_0055ca1c;
  if (0 < *(short *)((int)param_1 + 0x5a)) {
    do {
      FUN_001641c4();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)((int)param_1 + 0x5a));
  }
  *(unsigned short *)((int)param_1 + 0x5a) = 0;
  return param_1;
}
