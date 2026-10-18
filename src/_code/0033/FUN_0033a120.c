/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033a120` (_code @ 0x33a120, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00240420. */
extern unsigned int FUN_0029a2d0(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002bcf58. */


void FUN_0033a120(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [256];
  
  FUN_002bcf58(temp_v1,"battle/army_summon/army_summon.bam",0x100);
  FUN_00240420(param_1,temp_v1);
  temp_v0 = FUN_0029a2d0(temp_v1,0x1c0);
  *(unsigned int *)(param_1 + 0x4398) = temp_v0;
  return;
}
