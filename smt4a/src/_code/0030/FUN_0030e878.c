/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030e878` (_code @ 0x30e878, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int *DAT_005949f8; /* 0x5949f8 */
extern int DAT_005949fc; /* 0x5949fc */


void FUN_0030e878(unsigned int param_1,int *param_2)

{
  int *piVar1;
  int temp_v0;
  
  piVar1 = DAT_005949f8;
  if (DAT_005949f8 == (int *)0x0) {
    DAT_005949fc = 1;
    DAT_005949f8 = param_2;
  }
  else {
    while( 1 ) {
      temp_v0 = (**(romwright_code **)(*piVar1 + 0x14))(piVar1);
      if (temp_v0 == 0) break;
      piVar1 = (int *)(**(romwright_code **)(*piVar1 + 0x14))(piVar1);
    }
    (**(romwright_code **)(*piVar1 + 0x18))(piVar1,param_2);
    DAT_005949fc = DAT_005949fc + 1;
  }
  return;
}
