/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00339eec` (_code @ 0x339eec, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002402c4. */
extern unsigned int FUN_0029a034(unsigned char *, unsigned int);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00339eec(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [256];
  
  rt_memcpy_w(temp_v1,"battle/army_summon/army_summon.bam",0x100);
  FUN_002402c4(param_1,temp_v1);
  temp_v0 = FUN_0029a034(temp_v1,0x1c0);
  *(unsigned int *)(param_1 + 0x4398) = temp_v0;
  return;
}
