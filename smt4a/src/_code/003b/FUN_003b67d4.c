/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b67d4` (_code @ 0x3b67d4, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00184310. */


unsigned int FUN_003b67d4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  
  FUN_00184310();
  temp_v0 = *(unsigned char *)(param_1 + 0xc);
  temp_v1 = 0;
  if (temp_v0 == 4) {
    temp_v1 = 0x3ea;
  }
  else if (temp_v0 < 5) {
    if (temp_v0 == 0) {
      temp_v1 = 0x3ef;
    }
    else if (temp_v0 == 1) {
      temp_v1 = 0x3f0;
    }
    else if (temp_v0 == 2) {
      temp_v1 = 1000;
    }
    else if (temp_v0 == 3) {
      temp_v1 = 0x3e9;
    }
  }
  else if (temp_v0 == 5) {
    temp_v1 = 0x3eb;
  }
  else if (temp_v0 == 6) {
    temp_v1 = 0x3ed;
  }
  else {
    if (temp_v0 != 7) {
      if (temp_v0 == 0x14) {
        temp_v1 = 0x3ec;
      }
      return temp_v1;
    }
    temp_v1 = 0x3ee;
  }
  return temp_v1;
}
