/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c8630` (_code @ 0x2c8630, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c0ba8(unsigned int);
/* Supplied declaration required: FUN_002c2b1c. */


unsigned int FUN_002c8630(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  FUN_002c2b1c();
  if ((((param_1 - 0x19U >= 6) && (param_1 != 0x66)) ||
      (temp_v0 = FUN_002c0ba8(0x144), temp_v1 = 0, temp_v0 != 0)) &&
     (((param_1 - 0x1fU >= 5 && (param_1 != 0x67)) ||
      (temp_v0 = FUN_002c0ba8(0x15a), temp_v1 = 0, temp_v0 != 0)))) {
    temp_v1 = 1;
  }
  return temp_v1;
}
