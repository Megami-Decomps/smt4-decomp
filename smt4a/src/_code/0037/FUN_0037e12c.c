/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e12c` (_code @ 0x37e12c, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fd4; /* 0x588fd4 */

extern int FUN_00187168(int);
/* Supplied declaration required: FUN_0026fd50. */


void FUN_0037e12c(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_00588fd4;
  temp_v1 = FUN_00187168(param_1);
  if ((temp_v1 != 0) &&
     (FUN_0026fd50(temp_v0 + 0x19d0,param_1,*(unsigned short *)(param_1 + 300),param_3), param_2 != 0)) {
    *(unsigned int *)(temp_v0 + 0x19d8) = *(unsigned int *)(temp_v0 + 0x19e0);
    *(unsigned int *)(temp_v0 + 0x19dc) = *(unsigned int *)(temp_v0 + 0x19e4);
  }
  return;
}
