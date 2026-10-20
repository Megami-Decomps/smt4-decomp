/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003720a0` (_code @ 0x3720a0, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002cb55c(int, unsigned int, unsigned int);

extern int DAT_00588fd4; /* 0x588fd4 */

/* Supplied declaration required: FUN_002cb55c. */


void FUN_003720a0(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_00588fd4;
  temp_v1 = DAT_00588fd4 + 0x1390;
  *(unsigned char *)(DAT_00588fd4 + 0x2010) = 1;
  FUN_002cb55c(temp_v1,param_1,param_2);
  *(unsigned char *)(temp_v0 + 0x2017) = 0;
  *(unsigned char *)(temp_v0 + 0x20b0) = 1;
  *(unsigned char *)(temp_v0 + 0x2032) = 1;
  return;
}

} /* extern "C" */
