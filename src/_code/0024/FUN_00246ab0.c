/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246ab0` (_code @ 0x246ab0, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c0e4c. */
extern int FUN_002c0e9c(void);
/* Supplied declaration required: FUN_002c0ec4. */


int FUN_00246ab0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = 0;
  FUN_002c0ec4(0x2e,2);
  temp_v0 = FUN_002c0e4c();
  if (0 < temp_v0) {
    do {
      temp_v1 = FUN_002c0ec4(0x2e,2);
      temp_v2 = FUN_002c0e9c();
      temp_v3 = FUN_002c0e4c(temp_v1);
      temp_v0 = 0;
      if (temp_v4 < temp_v3) {
        temp_v0 = temp_v2 + temp_v4 * 0x2c;
      }
      if (*(short *)(temp_v0 + 0x20) == -1) {
        return 0;
      }
      if (*(short *)(temp_v0 + 0x20) == param_1) {
        return temp_v0;
      }
      temp_v4 = temp_v4 + 1;
      FUN_002c0ec4(0x2e,2);
      temp_v0 = FUN_002c0e4c();
    } while ((int)temp_v4 < temp_v0);
  }
  return 0;
}
