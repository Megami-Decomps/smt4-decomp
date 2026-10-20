/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fda3c` (_code @ 0x4fda3c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004102d8(int, int, int, unsigned int);

extern int DAT_005712f0; /* 0x5712f0 */

/* Supplied declaration required: FUN_004102d8. */


void FUN_004fda3c(short param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_005712f0;
  FUN_004102d8(DAT_005712f0,(int)param_1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 0x34;
  *(unsigned int *)(temp_v0 + 0x28) = param_4;
  *(unsigned int *)(temp_v0 + 0x18) = param_3;
  return;
}

} /* extern "C" */
