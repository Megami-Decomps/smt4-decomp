/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00406708` (_code @ 0x406708, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030ea58(int, unsigned int);

/* Supplied declaration required: FUN_0030ea58. */


int FUN_00406708(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int *piVar4;
  
  param_1 = param_1 + param_2 * 0xc;
  piVar2 = *(int **)(param_1 + 0x114);
  piVar4 = *(int **)(param_1 + 0x118);
  do {
    if (piVar2 == piVar4) {
      return 0;
    }
    temp_v1 = *piVar2;
    if (temp_v1 != 0) {
      temp_v0 = *(int *)(temp_v1 + 8);
      FUN_0030ea58(temp_v0,param_3);
      if (temp_v0 == 0) {
        return temp_v1;
      }
    }
    piVar2 = piVar2 + 1;
  } while( 1 );
}

} /* extern "C" */
