/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019e378` (_code @ 0x19e378, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_00187180. */
/* Supplied declaration required: FUN_00192798. */
/* Supplied declaration required: FUN_001a6738. */


void FUN_0019e378(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (*(char *)(param_1 + 0x26) != '\0') {
    temp_v0 = DAT_00570280;
    FUN_001a6738(DAT_00570280,param_1,param_2);
    if (temp_v0 == 0) {
      FUN_00187180(0x19,*(unsigned char *)(param_1 + 0x26));
      FUN_00192798();
    }
  }
  return;
}
