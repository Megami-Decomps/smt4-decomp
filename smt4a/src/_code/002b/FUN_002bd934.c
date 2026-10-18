/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd934` (_code @ 0x2bd934, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005b3f98; /* 0x5b3f98 */

/* Supplied declaration required: FUN_0042e67c. */
/* Supplied declaration required: FUN_0042e868. */


unsigned char FUN_002bd934(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = *(unsigned int *)(DAT_005b3f98 + 0x18);
  FUN_0042e67c(temp_v0,param_1,param_2);
  temp_v1 = (temp_v0 & 0x80000000) == 0;
  if (temp_v1) {
    FUN_0042e868(*(unsigned int *)(DAT_005b3f98 + 0x18));
  }
  return temp_v1;
}
