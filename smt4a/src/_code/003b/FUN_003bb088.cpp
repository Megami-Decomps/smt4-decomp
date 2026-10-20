/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb088` (_code @ 0x3bb088, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_0057f3b0; /* 0x57f3b0 */


void FUN_003bb088(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = DAT_0057f3b0;
  temp_v3 = 0x10;
  temp_v1 = 0;
  do {
    if (*(int *)(DAT_0057f3b0 + temp_v1 * 4 + 4) == param_1) {
      *(unsigned int *)(DAT_0057f3b0 + temp_v1 * 4 + 4) = 0;
      temp_v3 = temp_v1;
      break;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  if (0 < 0x10 - temp_v3) {
    temp_v1 = 0;
    temp_v2 = 0x10 - temp_v3;
    do {
      temp_v4 = temp_v0 + (temp_v3 + temp_v1) * 4;
      if (temp_v3 + temp_v1 + 1 < 0x10) {
        *(unsigned int *)(temp_v4 + 4) = *(unsigned int *)(temp_v4 + 8);
      }
      else {
        *(unsigned int *)(temp_v4 + 4) = 0;
      }
      temp_v1 = temp_v1 + 1;
      temp_v2 = temp_v2 - 1;
    } while (temp_v2 != 0);
  }
  return;
}

} /* extern "C" */
