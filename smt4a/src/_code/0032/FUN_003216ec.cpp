/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003216ec` (_code @ 0x3216ec, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);

extern int DAT_005710dc; /* 0x5710dc */

/* Supplied declaration required: FUN_001846d0. */


void FUN_003216ec(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_005710dc;
  if (DAT_005710dc != 0) {
    temp_v2 = 0;
    do {
      temp_v1 = temp_v0 + temp_v2 * 0x8c;
      if (*(int *)(temp_v1 + 0x68) != 0) {
        FUN_001846d0(temp_v1 + 0x20,1);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 5);
    *(unsigned char *)(temp_v0 + 0x2f5) = 0;
  }
  return;
}

} /* extern "C" */
