/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00183e58` (_code @ 0x183e58, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f0c8; /* 0x57f0c8 */

/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_0019d36c. */


void FUN_00183e58(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  
  temp_v1 = DAT_0057f0c8;
  temp_v2 = 0;
  piVar4 = (int *)(DAT_0057f0c8 + 0x5d0);
  do {
    FUN_001846d0(temp_v1 + temp_v2 * 0x8c + 0x34,1);
    temp_v3 = temp_v1 + temp_v2 * 4;
    temp_v0 = *(char *)(temp_v3 + 0x5ac);
    if (temp_v0 != '\0') {
      if ((temp_v0 == '\a' || temp_v0 == '\t') ||
         ((temp_v0 == '\x13' || temp_v0 == '\x14') || temp_v0 == '\x15')) {
        FUN_0019d36c();
        *piVar4 = *(int *)(temp_v1 + 0x5d0) - 1;
      }
      if (*(char *)(temp_v3 + 0x5ac) == '\b') {
        FUN_0019d36c();
        *piVar4 = *(int *)(temp_v1 + 0x5d0) - 1;
        FUN_0019d36c();
        *piVar4 = *piVar4 - 1;
      }
      FUN_0019d36c();
      *piVar4 = *(int *)(temp_v1 + 0x5d0) - 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 6);
  if (0 < *(int *)(temp_v1 + 0x5d0)) {
    temp_v2 = 0;
    do {
      FUN_0019d36c();
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(temp_v1 + 0x5d0));
    *(unsigned int *)(temp_v1 + 0x5d0) = 0;
  }
  temp_v1 = DAT_0057f0c8;
  *(unsigned int *)(DAT_0057f0c8 + 0xc) = 0;
  *(unsigned int *)(temp_v1 + 0x10) = 3;
  return;
}
