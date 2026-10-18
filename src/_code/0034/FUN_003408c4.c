/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003408c4` (_code @ 0x3408c4, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00376b78; /* 0x376b78 */

/* Supplied declaration required: FUN_002c5f58. */
extern int FUN_00380b4c(void);


int FUN_003408c4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00380b4c();
  temp_v0 = temp_v0 + 0x20;
  FUN_002c5f58(temp_v0,&LAB_00376b78,4,8);
  return temp_v0 - 0x20;
}
