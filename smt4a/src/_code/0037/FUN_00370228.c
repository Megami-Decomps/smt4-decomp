/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00370228` (_code @ 0x370228, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005f1658; /* 0x5f1658 */
extern unsigned int DAT_005f1660; /* 0x5f1660 */

extern unsigned int FUN_00236038(void);
extern unsigned int FUN_002360dc(unsigned int);
/* Supplied declaration required: FUN_002e342c. */


unsigned int FUN_00370228(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_002360dc(1);
  DAT_005f1658 = temp_v0;
  FUN_002e342c(&DAT_005f1660,temp_v1);
  return 1;
}
