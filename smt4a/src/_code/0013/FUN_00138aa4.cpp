/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138aa4` (_code @ 0x138aa4, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_0057f69c; /* 0x57f69c */
extern int DAT_0057f6a8; /* 0x57f6a8 */


void FUN_00138aa4(unsigned int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_0057f69c;
  temp_v2 = *(int *)(DAT_0057f69c + 0x21e18) + param_1;
  if (temp_v2 >= 36000000) {
    *(unsigned int *)(DAT_0057f69c + 0x21e18) = 35999999;
  }
  else {
    *(unsigned int *)(DAT_0057f69c + 0x21e18) = temp_v2;
  }
  temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + 0x8b);
  if (temp_v2 < 5) {
    temp_v1 = *(unsigned int *)(DAT_0057f6a8 + temp_v2 * 4);
    if (param_1 >= temp_v1) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = temp_v1 - param_1;
    }
    *(int *)(DAT_0057f6a8 + temp_v2 * 4) = temp_v0;
  }
  return;
}

} /* extern "C" */
