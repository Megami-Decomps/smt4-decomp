/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334434` (_code @ 0x334434, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026fd50(int, unsigned int, int, unsigned int);

extern int DAT_00588fd4; /* 0x588fd4 */

/* Supplied declaration required: FUN_0026fd50. */


void FUN_00334434(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00588fd4;
  FUN_0026fd50(DAT_00588fd4 + 0x19d0,param_1,0,param_3);
  if (param_2 != 0) {
    *(unsigned int *)(temp_v0 + 0x19d8) = *(unsigned int *)(temp_v0 + 0x19e0);
    *(unsigned int *)(temp_v0 + 0x19dc) = *(unsigned int *)(temp_v0 + 0x19e4);
  }
  return;
}

} /* extern "C" */
