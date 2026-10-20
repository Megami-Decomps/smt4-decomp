/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003278c8` (_code @ 0x3278c8, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fd63c(int, int);

extern unsigned short DAT_005f1882; /* 0x5f1882 */

extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_003fd63c. */


void FUN_003278c8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00162e8c();
  temp_v2 = 0;
  if ('\0' < *(char *)(temp_v0 + 0xe17)) {
    do {
      if ((*(char *)(temp_v0 + temp_v2 + 0x15f4) != '\0') &&
         (temp_v1 = temp_v0 + temp_v2 * 2, *(short *)(temp_v1 + 0x1644) == param_1)) {
        DAT_005f1882 = *(unsigned short *)(temp_v1 + 0x1604);
        *(unsigned char *)(temp_v0 + temp_v2 + 0x15f4) = 0;
        if (*(short *)(temp_v1 + 0x1624) != 0) {
          FUN_003fd63c((int)*(short *)(temp_v1 + 0x1624),1);
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(char *)(temp_v0 + 0xe17));
  }
  return;
}

} /* extern "C" */
