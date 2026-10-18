/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5e3c` (_code @ 0x2c5e3c, 0xa3 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern signed char DAT_00465040; /* 0x465040 */

extern int FUN_002b0614(int);
/* Supplied declaration required: FUN_002c3b44. */
extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, int);
/* Supplied declaration required: FUN_002c5ff4. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002c6336) */

void FUN_002c5e3c(int param_1,int *param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [64];
  
  FUN_002c3b44(temp_v1,0x100);
  if ((DAT_00465040 != '\0') || (temp_v0 = FUN_002b0614(param_1), temp_v0 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_2[3] = param_1 >> 2;
  if (param_1 >> 2 != 0) {
    temp_v1[0] = 1;
    temp_v0 = FUN_002c4b84(0x100,0x100,0,param_1);
    param_2[4] = temp_v0;
    param_2[5] = param_1;
    FUN_002c5ff4(temp_v0,param_3,param_1);
  }
  else {
    param_2[4] = 0;
    param_2[5] = 0;
  }
  if (param_2[2] < 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002c5a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_2 + param_2[2] * 0xc + 4))();
  return;
}
