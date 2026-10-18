/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002304d0` (_code @ 0x2304d0, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_4_stack;

extern int DAT_0057f268; /* 0x57f268 */


unsigned int FUN_002304d0(unsigned int param_1,int param_2,int param_3,int param_4)

{
  if (param_3 != 0) {
    if (*(char *)(DAT_0057f268 + 0x42) == '\0') {
      param_4 = param_4 * 0xc;
    }
    else {
      param_4 = 0;
    }
    if (*(short *)(DAT_0057f268 + (param_4 + (param_3 * 4 - 4) + param_2) * 8 + 0xa84) == 0) {
      return 0;
    }
  }
  else if (*(char *)(param_2 + DAT_0057f268 + 0x9c0) == '\0') {
    return 0;
  }
  return 1;
}
