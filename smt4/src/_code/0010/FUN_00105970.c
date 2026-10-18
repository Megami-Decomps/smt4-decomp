/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105970` (_code @ 0x105970, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004d92f0; /* 0x4d92f0 */

/* Supplied declaration required: FUN_002c2264. */
/* Supplied declaration required: FUN_002c2318. */


void FUN_00105970(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 * 8;
    piVar3 = (int *)(&DAT_004d92f0 + temp_v0);
    if (*(int *)(temp_v0 + 0x4d92f4) != 0) {
      if (*piVar3 >= 1) {
        *piVar3 = *piVar3 - 1;
      }
      else {
        FUN_002c2318();
        *(unsigned int *)(temp_v0 + 0x4d92f4) = 0;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x40);
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 * 8;
    if (*(int *)(temp_v0 + 0x4d94f4) != 0) {
      if (*piVar3 < 1) {
        FUN_002c2264();
        *(unsigned int *)(temp_v0 + 0x4d94f4) = 0;
      }
      else {
        *(int *)(temp_v0 + 0x4d94f0) = *(int *)(temp_v0 + 0x4d94f0) - 1;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x40);
  return;
}
