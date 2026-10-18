/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027af3c` (_code @ 0x27af3c, 0x198 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a48; /* 0x447a48 */

/* Supplied declaration required: FUN_00267420. */


void FUN_0027af3c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = DAT_00447a48 + temp_v1 * 0x28;
    if (*(char *)(temp_v0 + 0x1c) != '\0') {
      if (*(short *)(temp_v0 + 0x32) == 0x10) {
        FUN_00267420((int)(short)*(unsigned int *)(temp_v0 + 0x38));
      }
      if (*(short *)(temp_v0 + 0x32) == 10) {
        FUN_00267420((int)(short)*(unsigned int *)(temp_v0 + 0x38));
      }
      if (*(short *)(temp_v0 + 0x32) == 0xb) {
        FUN_00267420((int)(short)*(unsigned int *)(temp_v0 + 0x38));
      }
      if (*(short *)(temp_v0 + 0x32) == 0xc) {
        FUN_00267420((int)(short)*(unsigned int *)(temp_v0 + 0x38));
      }
      if (*(short *)(temp_v0 + 0x32) == 0x17) {
        FUN_00267420((int)(short)*(unsigned int *)(temp_v0 + 0x38));
      }
      if (*(short *)(temp_v0 + 0x32) == 0x15) {
        FUN_00267420((int)(short)*(unsigned int *)(temp_v0 + 0x38));
      }
      if (*(short *)(temp_v0 + 0x32) == 0x14) {
        FUN_00267420((int)(short)*(unsigned int *)(temp_v0 + 0x38));
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  return;
}
