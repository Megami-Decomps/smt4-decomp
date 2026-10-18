/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eaf9c` (_code @ 0x3eaf9c, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023592c. */
/* Supplied declaration required: FUN_0037f334. */
/* Supplied declaration required: FUN_0037f770. */


void FUN_003eaf9c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = param_1 - 0x50;
  temp_v3 = *(char *)(param_1 - 0x44) != '\0';
  temp_v0 = '\0';
  if (temp_v3) {
    temp_v0 = *(char *)(param_1 - 0x43);
  }
  if (temp_v3 && temp_v0 != '\0') {
    if ((*(int *)(param_1 + 0x1c) != 0) || (0.0f < *(float *)(param_1 + 0x20))) {
      FUN_0037f770(temp_v2);
    }
    else if (*(char *)(param_1 - 0x42) == '\0') {
      FUN_0037f334(temp_v2);
    }
    temp_v1 = 0;
    do {
      if ((temp_v1 < 0x10) && (*(int *)(temp_v2 + temp_v1 * 4 + 0x8c) != 0)) {
        FUN_0023592c();
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x10);
  }
  return;
}
