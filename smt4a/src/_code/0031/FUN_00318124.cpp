/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318124` (_code @ 0x318124, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164ce0(unsigned int, int);

extern int DAT_0057f4c4; /* 0x57f4c4 */

extern int FUN_00163e40(unsigned int);
/* Supplied declaration required: FUN_00164ce0. */


void FUN_00318124(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0057f4c4;
  if (DAT_0057f4c4 != 0) {
    temp_v2 = 1;
    do {
      temp_v3 = temp_v0 + temp_v2 * 4;
      temp_v1 = FUN_00163e40(*(unsigned int *)(temp_v3 + 0x634));
      if (temp_v1 != 0) {
        FUN_00164ce0(*(unsigned int *)(temp_v3 + 0x634),1);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
  }
  return;
}

} /* extern "C" */
