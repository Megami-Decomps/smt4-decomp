/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034cb00` (_code @ 0x34cb00, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164a9c(void);
int FUN_0019a7f4(int, int);
int FUN_002e132c(int);
int FUN_002e3328(void);

extern int DAT_00588c54; /* 0x588c54 */

/* Supplied declaration required: FUN_00164a9c. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_002e132c. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_0034cb00(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_00164a9c();
  temp_v0 = 0;
  do {
    FUN_0019a7f4(0x2c,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 5);
  FUN_002e132c(0x2c);
  if (DAT_00588c54 != 0) {
    FUN_002e3328();
    DAT_00588c54 = 0;
  }
  return;
}

} /* extern "C" */
