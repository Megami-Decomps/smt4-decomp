/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024496c` (_code @ 0x24496c, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00580c8c; /* 0x580c8c */

/* Supplied declaration required: FUN_001642e4. */
/* Supplied declaration required: FUN_001abbc4. */


int FUN_0024496c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int uStack_10;
  
  if ((param_1 < 0x10) && (temp_v0 = DAT_00580c8c + param_1 * 100, *(int *)(temp_v0 + 0x68) == 0)) {
    uStack_10 = param_4;
    FUN_001642e4(param_2,&uStack_10,1,0x80);
    *(unsigned int *)(temp_v0 + 100) = param_2;
    FUN_001abbc4();
    *(unsigned int *)(temp_v0 + 0x68) = param_2;
    return param_1;
  }
  return -1;
}
