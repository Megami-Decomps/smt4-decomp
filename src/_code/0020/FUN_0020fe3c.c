/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020fe3c` (_code @ 0x20fe3c, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004dad80; /* 0x4dad80 */

extern unsigned int FUN_002525d4(unsigned int);
/* Supplied declaration required: FUN_002c028c. */


void FUN_0020fe3c(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002525d4(1);
  FUN_002c028c(temp_v0,*(unsigned int *)(*param_1 + param_2 * 4));
  DAT_004dad80 = DAT_004dad80 + 1;
  return;
}
