/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f1214` (_code @ 0x2f1214, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00439ca8; /* 0x439ca8 */

extern int FUN_00296cc8(void);
/* Supplied declaration required: FUN_003ae03c. */
/* Supplied declaration required: FUN_003ae2b0. */
extern int FUN_003ae3f0(unsigned int);
/* Supplied declaration required: FUN_003ae6fc. */


unsigned int FUN_002f1214(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00296cc8();
  if (temp_v0 != 0) {
    temp_v0 = FUN_003ae6fc();
    if (temp_v0 != 0) {
      FUN_003ae03c(DAT_00439ca8);
    }
    temp_v0 = FUN_003ae3f0(DAT_00439ca8);
    if (temp_v0 == 0) {
      return 0;
    }
  }
  else {
    temp_v0 = FUN_003ae3f0(DAT_00439ca8);
    if (temp_v0 != 0) {
      FUN_003ae2b0(DAT_00439ca8);
    }
    temp_v0 = FUN_003ae6fc(DAT_00439ca8);
    if (temp_v0 == 0) {
      return 0;
    }
  }
  return 1;
}
