/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038af8c` (_code @ 0x38af8c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00581288; /* 0x581288 */

/* Supplied declaration required: FUN_00162e8c. */
extern int FUN_00162ea4(void);
/* Supplied declaration required: FUN_003fd7c0. */


unsigned int FUN_0038af8c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_00162e8c();
  if (*(int *)(DAT_00581288 + 0x228) != 0) {
    temp_v0 = FUN_00162ea4();
    if (temp_v0 == 0) {
      return 0;
    }
    if (*(int *)(DAT_00581288 + 0x18c) != 0) {
      FUN_003fd7c0(*(unsigned int *)(*(int *)(DAT_00581288 + 0x18c) + 4),0,2);
    }
  }
  return 1;
}
