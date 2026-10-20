/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031bb8c` (_code @ 0x31bb8c, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_002b6a54(int, unsigned short);
extern int gameGetOptions(void);


unsigned int FUN_0031bb8c(void)

{
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v1 = gameGetOptions();
  temp_v0 = *(unsigned short *)(temp_v1 + 0x606);
  temp_v1 = gameGetOptions();
  temp_v1 = FUN_002b6a54((int)*(short *)(temp_v1 + 0x604),temp_v0);
  switch((*(unsigned int *)(temp_v1 + 8) & 0x3fffff) >> 0x11) {
  case 0:
    return 0x3ef;
  case 1:
    return 0x3f0;
  case 2:
    return 1000;
  case 3:
    return 0x3e9;
  case 4:
    return 0x3ea;
  case 5:
    return 0x3eb;
  case 6:
    return 0x3ed;
  case 7:
    return 0x3ee;
  default:
    return 0;
  case 0x11:
    return 0x3ec;
  }
}

} /* extern "C" */
