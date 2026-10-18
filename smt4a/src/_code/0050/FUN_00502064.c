/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00502064` (_code @ 0x502064, 0x4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0016e8c4. */
extern int ll_sdiv(int, int, unsigned int, unsigned int);


unsigned int FUN_00502064(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [2];
  
  temp_v1[0] = param_4;
  temp_v0 = ll_sdiv(*param_1 + 0x7cfc8400,param_1[1] + 0x395f + (unsigned int)(0x83037bff < *param_1),86400000
                  ,0);
  FUN_0016e8c4(0,0,temp_v1,temp_v0 - 0xb2407);
  return temp_v1[0];
}
