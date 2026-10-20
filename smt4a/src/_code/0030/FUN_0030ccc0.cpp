/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ccc0` (_code @ 0x30ccc0, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int *DAT_005949f8; /* 0x5949f8 */
extern int DAT_005949fc; /* 0x5949fc */


void FUN_0030ccc0(unsigned int param_1,int *param_2)

{
  unsigned int temp_v0;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if (DAT_005949f8 == param_2) {
    DAT_005949f8 = (int *)(**(romwright_code **)(*DAT_005949f8 + 0x14))();
  }
  else {
    piVar2 = DAT_005949f8;
    piVar4 = (int *)0x0;
    while( 1 ) {
      piVar3 = piVar2;
      if (piVar3 == (int *)0x0) {
        return;
      }
      if (piVar3 == param_2) break;
      piVar2 = (int *)(**(romwright_code **)(*piVar3 + 0x14))();
      piVar4 = piVar3;
    }
    temp_v0 = (**(romwright_code **)(*piVar3 + 0x14))();
    (**(romwright_code **)(*piVar4 + 0x18))(piVar4,temp_v0);
  }
  (**(romwright_code **)(*param_2 + 0x18))(param_2,0);
  DAT_005949fc = DAT_005949fc - 1;
  return;
}

} /* extern "C" */
