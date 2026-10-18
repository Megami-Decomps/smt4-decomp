/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035cfd4` (_code @ 0x35cfd4, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00581288; /* 0x581288 */

/* Supplied declaration required: FUN_00162e8c. */
extern unsigned int FUN_00236038(unsigned int);


unsigned int FUN_0035cfd4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  FUN_00162e8c();
  temp_v1 = FUN_00236038(0);
  temp_v0 = DAT_00581288;
  *(unsigned int *)(DAT_00581288 + 0x228) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x1d0) = 0xd;
  *(unsigned int *)(temp_v0 + 0x1d4) = 0;
  *(unsigned int *)(temp_v0 + 0x238) = temp_v1;
  return 1;
}
