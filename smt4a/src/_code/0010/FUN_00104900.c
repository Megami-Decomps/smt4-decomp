/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104900` (_code @ 0x104900, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002ea974. */
/* Supplied declaration required: FUN_002ea9c0. */
/* Supplied declaration required: FUN_002ea9dc. */


void FUN_00104900(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  unsigned char temp_v0 [104];
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_002ea974(temp_v0);
    FUN_002ea9c0(temp_v0,param_2);
    piVar1 = *(int **)(param_1 + 8);
    if (*(int *)(param_3 + 0x10) != 0) {
      (**(romwright_code **)(*piVar1 + 8))(piVar1,param_1,param_3,temp_v0);
    }
    else {
      (**(romwright_code **)(*piVar1 + 8))(piVar1,param_1,0,temp_v0);
    }
    FUN_002ea9dc(temp_v0);
  }
  return;
}
