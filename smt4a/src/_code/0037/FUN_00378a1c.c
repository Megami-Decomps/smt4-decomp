/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00378a1c` (_code @ 0x378a1c, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0058103c; /* 0x58103c */


void FUN_00378a1c(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0058103c;
  temp_v1 = 0;
  do {
    temp_v3 = temp_v0 + temp_v1 * 0x194;
    if (((*(char *)(temp_v3 + 0x1dc) != '\0') &&
        (((temp_v2 = *(int *)(temp_v3 + 0x1f0), temp_v2 == 0x1d || temp_v2 == 0x31 ||
          (temp_v2 == 0x1e || temp_v2 == 0x1f)) || ((temp_v2 == 0x30 || temp_v2 == 0x22) || temp_v2 == 0x23)))
        ) && (*(int *)(temp_v3 + 0x1e0) == 8)) {
      *(unsigned int *)(temp_v3 + 0x1e0) = 6;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x80);
  return;
}
