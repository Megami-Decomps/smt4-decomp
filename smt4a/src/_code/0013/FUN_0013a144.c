/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a144` (_code @ 0x13a144, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00635370; /* 0x635370 */

/* Supplied declaration required: FUN_0013dd78. */
/* Supplied declaration required: FUN_001836b0. */


void FUN_0013a144(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 * 8;
    piVar3 = (int *)(&DAT_00635370 + temp_v0);
    if (*(int *)(temp_v0 + 0x635374) != 0) {
      if (*piVar3 >= 1) {
        *piVar3 = *piVar3 - 1;
      }
      else {
        FUN_0013dd78();
        *(unsigned int *)(temp_v0 + 0x635374) = 0;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x40);
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 * 8;
    if (*(int *)(temp_v0 + 0x635574) != 0) {
      if (*piVar3 < 1) {
        FUN_001836b0();
        *(unsigned int *)(temp_v0 + 0x635574) = 0;
      }
      else {
        *(int *)(temp_v0 + 0x635570) = *(int *)(temp_v0 + 0x635570) - 1;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x40);
  return;
}
