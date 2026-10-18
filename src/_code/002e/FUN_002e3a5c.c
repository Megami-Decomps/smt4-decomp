/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e3a5c` (_code @ 0x2e3a5c, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00434228; /* 0x434228 */

extern int FUN_00248728(void);
extern unsigned int FUN_00296f60(void);
/* Supplied declaration required: FUN_0029c6dc. */


unsigned int FUN_002e3a5c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  DAT_00434228 = FUN_00296f60();
  temp_v0 = FUN_00248728();
  if (temp_v0 != 0) {
    FUN_0029c6dc(DAT_00434228,0);
  }
  return 1;
}
