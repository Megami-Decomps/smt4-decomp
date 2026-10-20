/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103e8e` (_code @ 0x103e8e, 0x4a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7232(int);
int FUN_002e75fa(int);
int FUN_002e9aa8(int, unsigned int);

typedef int romwright_code(...);
extern int stateTransitionIsValid(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002e75fa. */
extern int FUN_002e9a92(unsigned char);
/* Supplied declaration required: FUN_002e9aa8. */


unsigned int FUN_00103e8e(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e9a92(*(unsigned char *)(param_1 + 0x10));
  if (temp_v0 == 0) {
    if ((*(char *)(param_1 + 0x10) != '\x01') || (temp_v0 = stateTransitionIsValid(1,param_2), temp_v0 == 0)) {
      return 0;
    }
    FUN_002e75fa(param_1);
    FUN_002e9aa8(param_1,param_2);
    if (*(int **)(param_1 + 0x50) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(param_1 + 0x50) + 8))();
    }
    FUN_002e7232(param_1);
  }
  return 1;
}

} /* extern "C" */
