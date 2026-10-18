/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003490b4` (_code @ 0x3490b4, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_005f1b70; /* 0x5f1b70 */
extern int DAT_005f1c98; /* 0x5f1c98 */

/* Supplied declaration required: FUN_00137ee0. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_00321744. */
/* Supplied declaration required: FUN_003fd63c. */


unsigned int FUN_003490b4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0018719c(0x593);
  if (temp_v0 != 0) {
    FUN_00321744();
    FUN_003fd63c(0x593,0,1);
  }
  if ((DAT_005f1b70 != '\0') || (DAT_005f1c98 != -1)) {
    FUN_00137ee0(8,0);
  }
  return 1;
}
