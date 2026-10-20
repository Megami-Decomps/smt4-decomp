/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022fcb8` (_code @ 0x22fcb8, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_00168518(int, unsigned short);
extern int gameGetOptions(void);


unsigned int FUN_0022fcb8(void)

{
  unsigned int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v2 = gameGetOptions();
  temp_v1 = *(unsigned short *)(temp_v2 + 0x12e);
  temp_v2 = gameGetOptions();
  temp_v2 = FUN_00168518((int)*(short *)(temp_v2 + 300),temp_v1);
  temp_v0 = (*(unsigned int *)(temp_v2 + 8) & 0x7fffffff) >> 0x1a;
  temp_v3 = 0;
  if (temp_v0 == 4) {
    temp_v3 = 0x3ea;
  }
  else if (temp_v0 < 5) {
    if (temp_v0 == 0) {
      temp_v3 = 0x3ef;
    }
    else if (temp_v0 == 1) {
      temp_v3 = 0x3f0;
    }
    else if (temp_v0 == 2) {
      temp_v3 = 1000;
    }
    else if (temp_v0 == 3) {
      temp_v3 = 0x3e9;
    }
  }
  else if (temp_v0 == 5) {
    temp_v3 = 0x3eb;
  }
  else if (temp_v0 == 6) {
    temp_v3 = 0x3ed;
  }
  else {
    if (temp_v0 != 7) {
      if (temp_v0 == 0x14) {
        temp_v3 = 0x3ec;
      }
      return temp_v3;
    }
    temp_v3 = 0x3ee;
  }
  return temp_v3;
}

} /* extern "C" */
