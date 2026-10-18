/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002733d4` (_code @ 0x2733d4, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00208c64. */


void FUN_002733d4(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  temp_v2 = *param_1;
  do {
    temp_v0 = temp_v2 + temp_v1 * 0x194;
    if ((*(char *)(temp_v0 + 0x1d0) != '\0') && (*(int *)(temp_v0 + 0x1d4) == 3)) {
      FUN_00208c64(*(unsigned int *)(temp_v0 + 500));
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x80);
  return;
}
