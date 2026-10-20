/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b67e8` (_code @ 0x3b67e8, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192608(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00192608. */


unsigned int FUN_003b67e8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = gameGetPlayerData();
  temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 4);
  FUN_00192608();
  temp_v2 = *(unsigned int *)(temp_v2 + 0x24) >> 0x14;
  temp_v0 = 0;
  if (temp_v2 == 4) {
    temp_v0 = 0x3ea;
  }
  else if (temp_v2 < 5) {
    if (temp_v2 == 0) {
      temp_v0 = 0x3ef;
    }
    else if (temp_v2 == 1) {
      temp_v0 = 0x3f0;
    }
    else if (temp_v2 == 2) {
      temp_v0 = 1000;
    }
    else if (temp_v2 == 3) {
      temp_v0 = 0x3e9;
    }
  }
  else if (temp_v2 == 5) {
    temp_v0 = 0x3eb;
  }
  else if (temp_v2 == 6) {
    temp_v0 = 0x3ed;
  }
  else {
    if (temp_v2 != 7) {
      if (temp_v2 == 0x14) {
        temp_v0 = 0x3ec;
      }
      return temp_v0;
    }
    temp_v0 = 0x3ee;
  }
  return temp_v0;
}

} /* extern "C" */
