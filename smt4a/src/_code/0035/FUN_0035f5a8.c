/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035f5a8` (_code @ 0x35f5a8, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00570dc8; /* 0x570dc8 */
extern unsigned int DAT_00570dcc; /* 0x570dcc */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_001681cc. */


unsigned int FUN_0035f5a8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0014aa78();
  temp_v1 = DAT_00570dcc | *(unsigned int *)(temp_v0 + 0x45a4);
  *(unsigned int *)(temp_v0 + 0x45a0) = DAT_00570dc8 | *(unsigned int *)(temp_v0 + 0x45a0);
  *(unsigned int *)(temp_v0 + 0x45a4) = temp_v1;
  FUN_001681cc(0xdf);
  return 1;
}
