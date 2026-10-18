/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f7a4` (_code @ 0x10f7a4, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_00471b50; /* 0x471b50 */

extern int FUN_002bbb04(unsigned char *, int, unsigned int, int, unsigned int, unsigned int);


int FUN_0010f7a4(unsigned int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [4];
  
  if ((param_1 & 0xfff) != 0) {
    temp_v1 = -0x1f1fe40e;
    temp_v0 = DAT_00471b50;
  }
  else if (DAT_00471b50 < param_1) {
    temp_v1 = FUN_002bbb04(temp_v2,DAT_00471b50 + 0x8000000,0,param_1 - DAT_00471b50,3,3);
    temp_v0 = param_1;
    if (temp_v1 < 0) {
      return temp_v1;
    }
  }
  else {
    temp_v1 = FUN_002bbb04(temp_v2,param_1 + 0x8000000,0,DAT_00471b50 - param_1,1,0);
    temp_v0 = param_1;
    if (temp_v1 < 0) {
      return temp_v1;
    }
  }
  DAT_00471b50 = temp_v0;
  return temp_v1;
}
