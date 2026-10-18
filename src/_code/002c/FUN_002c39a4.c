/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c39a4` (_code @ 0x2c39a4, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b3ca0. */


unsigned int FUN_002c39a4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (param_1 == 0x20000) {
    temp_v1 = FUN_002b3ca0();
    if (temp_v1 == 0) {
      temp_v0 = 0x1f000000;
    }
    else {
      temp_v0 = 0x1f180000;
    }
    return temp_v0;
  }
  if (param_1 != 0x30000) {
    temp_v0 = 0;
  }
  else {
    temp_v1 = FUN_002b3ca0(0x30000);
    if (temp_v1 == 0) {
      temp_v0 = 0x1f300000;
    }
    else {
      temp_v0 = 0x1f380000;
    }
  }
  return temp_v0;
}
