/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002646d4` (_code @ 0x2646d4, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a2c; /* 0x447a2c */

extern int FUN_002c0ba8(void);


void FUN_002646d4(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  if (temp_v2 < DAT_00447a2c) {
    do {
      temp_v0 = temp_v2 * 0x178;
      if (((*(char *)(temp_v0 + 0x4a13c8) == '\0') && (*(int *)(temp_v0 + 0x4a1390) != 0)) &&
         (((*(short *)(temp_v0 + 0x4a13c4) != 0 && (temp_v1 = FUN_002c0ba8(), temp_v1 == 0)) ||
          ((*(short *)(temp_v0 + 0x4a13c6) != 0 && (temp_v1 = FUN_002c0ba8(), temp_v1 != 0)))))) {
        *(unsigned char *)(temp_v0 + 0x4a13c8) = 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < DAT_00447a2c);
  }
  return;
}
