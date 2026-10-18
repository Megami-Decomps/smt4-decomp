/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020043c` (_code @ 0x20043c, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043de68; /* 0x43de68 */

/* Supplied declaration required: FUN_003bbd74. */
extern int FUN_003bbec0(unsigned int);


unsigned int FUN_0020043c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_0043de68;
  temp_v2 = 0;
  if ((DAT_0043de68 != 0 && param_1 != 0) &&
     (temp_v1 = FUN_003bbec0(*(unsigned int *)(DAT_0043de68 + 4)), temp_v1 != 0)) {
    FUN_003bbd74(*(unsigned int *)(temp_v0 + 4),param_1);
    temp_v2 = 1;
  }
  return temp_v2;
}
