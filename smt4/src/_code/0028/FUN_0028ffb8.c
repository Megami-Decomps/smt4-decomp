/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028ffb8` (_code @ 0x28ffb8, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd50; /* 0x43dd50 */

extern int FUN_00241c40(int);
extern int FUN_00298dc8(int);
extern int FUN_00298de8(int);
/* Supplied declaration required: FUN_002b63c0. */


void FUN_0028ffb8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  
  temp_v1 = DAT_0043dd50;
  if (param_1 == 0) {
    return;
  }
  *(unsigned int *)(DAT_0043dd50 + 0x5d0) = 1;
  piVar4 = (int *)(temp_v1 + 0x5d0);
  if (*(char *)(temp_v1 + 0x5c4) != '\0') {
    temp_v2 = param_1;
    FUN_002b63c0();
    if ((*(unsigned char *)(temp_v2 + 7) & 0x40) != 0) {
      *piVar4 = *(int *)(temp_v1 + 0x5d0) + 1;
    }
    temp_v2 = FUN_00241c40(param_1);
    if (0 < temp_v2) {
      *piVar4 = *(int *)(temp_v1 + 0x5d0) + 1;
    }
    if (*(char *)(temp_v1 + 0x5c4) != '\0') {
      if (*(int *)(temp_v1 + 0x5d0) <= *(int *)(temp_v1 + 0x5c8)) {
        *(unsigned int *)(temp_v1 + 0x5c8) = 0;
      }
      return;
    }
  }
  temp_v0 = 0;
  temp_v2 = FUN_00298de8(param_1);
  if ((temp_v2 != 0) && (temp_v2 = param_1, FUN_002b63c0(), *(char *)(temp_v2 + 6) == '\0')) {
    temp_v0 = 1;
  }
  temp_v2 = FUN_00298dc8(param_1);
  if (temp_v2 != 0 || temp_v0) {
    temp_v2 = param_1;
    FUN_002b63c0();
    if ((*(unsigned char *)(temp_v2 + 7) & 0x40) != 0) {
      *piVar4 = *(int *)(temp_v1 + 0x5d0) + 1;
    }
    temp_v2 = FUN_00241c40(param_1);
    if (0 < temp_v2) {
      *piVar4 = *(int *)(temp_v1 + 0x5d0) + 1;
    }
  }
  if (*(int *)(temp_v1 + 0x5d0) <= *(int *)(temp_v1 + 0x5c8)) {
    *(unsigned int *)(temp_v1 + 0x5c8) = 0;
  }
  return;
}
