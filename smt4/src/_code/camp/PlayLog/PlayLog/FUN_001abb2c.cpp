/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001abb2c` (_code @ 0x1abb2c, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a46d8(int);
int FUN_002ae898(int, int);
int FUN_002b8cc8(void);
int FUN_002c415c(int);

extern int DAT_0043dd08; /* 0x43dd08 */

/* Supplied declaration required: FUN_002a46d8. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002b8cc8. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_001abb2c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043dd08;
  FUN_002ae898(0x30,0);
  FUN_002a46d8(0x37);
  temp_v1 = 0;
  if (temp_v1 < *(short *)(temp_v0 + 0x358)) {
    do {
      FUN_002b8cc8();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(short *)(temp_v0 + 0x358));
  }
  if (temp_v0 != 0) {
    FUN_002c415c(temp_v0);
    DAT_0043dd08 = 0;
  }
  return;
}

} /* extern "C" */
