/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb0e0` (_code @ 0x2fb0e0, 0x108 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_00246a98. */
/* Supplied declaration required: FUN_002b0908. */


void FUN_002fb0e0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if ((param_1 < 0x14b) &&
     ((temp_v0 = 0xff, param_1 < 0x137 || (temp_v0 = (0x136 - param_1) * 0x20 + 0xff, -1 < (int)temp_v0)))
     ) {
    FUN_00246a98(temp_v0 & 0xff);
    temp_v1 = param_1 - 0xf0;
    if (temp_v1 >= 6) {
      temp_v1 = 5;
    }
    temp_v1 = (temp_v1 * 0xf0) / 5;
    if (temp_v1 < 0xf0) {
      temp_v2 = (0xf0 - temp_v1) / 2;
    }
    else {
      temp_v2 = 0;
    }
    FUN_002b0908(2,10,37000,0,temp_v2,400,temp_v1,0xb);
    param_1 = param_1 - 0xf5;
    if (param_1 >= 9) {
      param_1 = 8;
    }
    temp_v1 = (int)(param_1 * 0xf0 + ((unsigned int)(param_1 * 0xf0 >> 0x1f) >> 0x1d)) >> 3;
    if (temp_v1 < 0xf0) {
      temp_v2 = (0xf0 - temp_v1) / 2;
    }
    else {
      temp_v2 = 0;
    }
    FUN_002b0908(2,10,0x9089,0,temp_v2,400,temp_v1,0xb);
    FUN_00246a98(0xff);
    return;
  }
  return;
}
