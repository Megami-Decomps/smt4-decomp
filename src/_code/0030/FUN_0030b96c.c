/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b96c` (_code @ 0x30b96c, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00434228; /* 0x434228 */

/* Supplied declaration required: FUN_00295eac. */
extern int FUN_0029c68c(void);


int FUN_0030b96c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0029c68c();
  if (temp_v0 == 1) {
    FUN_00295eac(DAT_00434228);
    DAT_00434228 = 0;
  }
  return temp_v0;
}
