/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b79d8` (_code @ 0x2b79d8, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00580c94; /* 0x580c94 */

extern int FUN_0018719c(void);


void FUN_002b79d8(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  if (temp_v2 < DAT_00580c94) {
    do {
      temp_v0 = temp_v2 * 0x17c;
      if (((*(char *)(temp_v0 + 0x5f3404) == '\0') && (*(int *)(temp_v0 + 0x5f33cc) != 0)) &&
         (((*(short *)(temp_v0 + 0x5f3400) != 0 && (temp_v1 = FUN_0018719c(), temp_v1 == 0)) ||
          ((*(short *)(temp_v0 + 0x5f3402) != 0 && (temp_v1 = FUN_0018719c(), temp_v1 != 0)))))) {
        *(unsigned char *)(temp_v0 + 0x5f3404) = 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < DAT_00580c94);
  }
  return;
}

} /* extern "C" */
