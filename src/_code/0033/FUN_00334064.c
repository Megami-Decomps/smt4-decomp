/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334064` (_code @ 0x334064, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b66ec(void);
extern int FUN_002c0ba8(unsigned int);


void FUN_00334064(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c0ba8(0x1fd);
  if (((temp_v0 == 0) && (temp_v0 = FUN_002c0ba8(0x1fe), temp_v0 == 0)) &&
     (temp_v0 = FUN_002c0ba8(0x1ff), temp_v0 == 0)) {
    temp_v0 = FUN_002b66ec();
    param_1 = *(short *)(temp_v0 + 0x74) + param_1;
    if (param_1 < -999) {
      param_1 = -999;
    }
    else if (param_1 >= 1000) {
      param_1 = 999;
    }
    *(short *)(temp_v0 + 0x74) = (short)param_1;
  }
  return;
}
