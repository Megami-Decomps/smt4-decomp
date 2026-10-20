/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027accc` (_code @ 0x27accc, 0x198 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002671f4(int);

extern int DAT_00447a48; /* 0x447a48 */

/* Supplied declaration required: FUN_002671f4. */


void FUN_0027accc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = DAT_00447a48 + temp_v1 * 0x28;
    if (*(char *)(temp_v0 + 0x1c) != '\0') {
      if (*(short *)(temp_v0 + 0x32) == 0x10) {
        FUN_002671f4((int)(short)*(unsigned int *)(temp_v0 + 0x38));
      }
      if (*(short *)(temp_v0 + 0x32) == 10) {
        FUN_002671f4((int)(short)*(unsigned int *)(temp_v0 + 0x38));
      }
      if (*(short *)(temp_v0 + 0x32) == 0xb) {
        FUN_002671f4((int)(short)*(unsigned int *)(temp_v0 + 0x38));
      }
      if (*(short *)(temp_v0 + 0x32) == 0xc) {
        FUN_002671f4((int)(short)*(unsigned int *)(temp_v0 + 0x38));
      }
      if (*(short *)(temp_v0 + 0x32) == 0x17) {
        FUN_002671f4((int)(short)*(unsigned int *)(temp_v0 + 0x38));
      }
      if (*(short *)(temp_v0 + 0x32) == 0x15) {
        FUN_002671f4((int)(short)*(unsigned int *)(temp_v0 + 0x38));
      }
      if (*(short *)(temp_v0 + 0x32) == 0x14) {
        FUN_002671f4((int)(short)*(unsigned int *)(temp_v0 + 0x38));
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  return;
}

} /* extern "C" */
