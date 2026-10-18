/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004315e4` (_code @ 0x4315e4, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e6dd4. */


unsigned int FUN_004315e4(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (param_4 != 0) {
    FUN_002e6dd4(param_1,param_2 - 1);
    temp_v0 = param_1 + param_2;
    if (param_3 == 1) {
      *(unsigned char *)(temp_v0 - 1) = 0xd;
      FUN_002e6dd4(temp_v0,param_2 - 1);
      *(unsigned char *)((param_1 + param_2 * 2) - 1) = 10;
      return 2;
    }
    if (param_3 == 2) {
      *(unsigned char *)(temp_v0 - 1) = 0xd;
      return 1;
    }
    if (param_3 == 3) {
      *(unsigned char *)(temp_v0 - 1) = 10;
      return 1;
    }
  }
  else {
    if (param_3 == 1) {
      return 2;
    }
    if (param_3 == 2 || param_3 == 3) {
      return 1;
    }
  }
  return 0;
}
