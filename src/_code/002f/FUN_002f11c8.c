/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f11c8` (_code @ 0x2f11c8, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00439ca8; /* 0x439ca8 */

extern int FUN_00296f60(void);
/* Supplied declaration required: FUN_003ae25c. */
/* Supplied declaration required: FUN_003ae4d0. */
extern int FUN_003ae610(unsigned int);
/* Supplied declaration required: FUN_003ae91c. */


unsigned int FUN_002f11c8(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00296f60();
  if (temp_v0 != 0) {
    temp_v0 = FUN_003ae91c();
    if (temp_v0 != 0) {
      FUN_003ae25c(DAT_00439ca8);
    }
    temp_v0 = FUN_003ae610(DAT_00439ca8);
    if (temp_v0 == 0) {
      return 0;
    }
  }
  else {
    temp_v0 = FUN_003ae610(DAT_00439ca8);
    if (temp_v0 != 0) {
      FUN_003ae4d0(DAT_00439ca8);
    }
    temp_v0 = FUN_003ae91c(DAT_00439ca8);
    if (temp_v0 == 0) {
      return 0;
    }
  }
  return 1;
}
