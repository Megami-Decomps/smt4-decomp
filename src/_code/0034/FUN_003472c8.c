/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003472c8` (_code @ 0x3472c8, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00376968; /* 0x376968 */

/* Supplied declaration required: FUN_002c5d5c. */
extern int FUN_0038093c(void);


int FUN_003472c8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0038093c();
  temp_v0 = temp_v0 + 0x20;
  FUN_002c5d5c(temp_v0,&LAB_00376968,4);
  return temp_v0 - 0x20;
}
