/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234660` (_code @ 0x234660, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0042259c; /* 0x42259c */

/* Supplied declaration required: FUN_002b8cc8. */


unsigned int * FUN_00234660(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  *param_1 = (unsigned int)&DAT_0042259c;
  if (0 < *(short *)((int)param_1 + 0x5a)) {
    do {
      FUN_002b8cc8();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)((int)param_1 + 0x5a));
  }
  *(unsigned short *)((int)param_1 + 0x5a) = 0;
  return param_1;
}
