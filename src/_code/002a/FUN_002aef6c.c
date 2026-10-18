/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aef6c` (_code @ 0x2aef6c, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_0014c9bc. */
/* Supplied declaration required: FUN_002c0e9c. */
/* Supplied declaration required: FUN_002c0ec4. */


void FUN_002aef6c(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (*(char *)(param_1 + 0x2a) != '\0') {
    temp_v0 = DAT_00433158;
    FUN_0014c9bc(DAT_00433158,param_1,param_2);
    if (temp_v0 == 0) {
      FUN_002c0ec4(0x19,*(unsigned char *)(param_1 + 0x2a));
      FUN_002c0e9c();
    }
  }
  return;
}
