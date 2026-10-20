/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003354a0` (_code @ 0x3354a0, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a775c(unsigned int);
int FUN_002c415c(unsigned int);

extern unsigned char DAT_004206f0; /* 0x4206f0 */

/* Supplied declaration required: FUN_002a775c. */
/* Supplied declaration required: FUN_002c415c. */


unsigned int * FUN_003354a0(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *q;
  
  temp_v0 = 0;
  *param_1 = (unsigned int)&DAT_004206f0;
  do {
    q = param_1 + temp_v0 * 0x14 + 4;
    if (param_1[temp_v0 * 0x14 + 6] != 0) {
      FUN_002a775c(param_1[temp_v0 * 0x14 + 6]);
      q[2] = 0;
    }
    if (q[3] != 0) {
      FUN_002c415c(q[3]);
      q[3] = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  if (param_1[2] != 0) {
    FUN_002a775c(param_1[2]);
    param_1[2] = 0;
  }
  return param_1;
}

} /* extern "C" */
