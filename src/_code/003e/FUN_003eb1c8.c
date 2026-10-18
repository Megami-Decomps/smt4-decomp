/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eb1c8` (_code @ 0x3eb1c8, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00235ac4. */
/* Supplied declaration required: FUN_0037f544. */
/* Supplied declaration required: FUN_0037f980. */


void FUN_003eb1c8(int param_1)

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
      FUN_0037f980(temp_v2);
    }
    else if (*(char *)(param_1 - 0x42) == '\0') {
      FUN_0037f544(temp_v2);
    }
    temp_v1 = 0;
    do {
      if ((temp_v1 < 0x10) && (*(int *)(temp_v2 + temp_v1 * 4 + 0x8c) != 0)) {
        FUN_00235ac4();
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x10);
  }
  return;
}
