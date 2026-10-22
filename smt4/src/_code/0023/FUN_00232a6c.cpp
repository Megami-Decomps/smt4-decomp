/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00232a6c` (_code @ 0x232a6c, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNew(void);
int FUN_00395558(void);
int callbackOwnerCreateOrReuseAndAssociateCallback(unsigned int, unsigned int);
int _ZN9Obj422338C1Ev(void);

typedef int romwright_code(...);
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: FUN_00395558. */
/* Supplied declaration required: callbackOwnerCreateOrReuseAndAssociateCallback. */
/* Supplied declaration required: _ZN9Obj422338C1Ev. */


unsigned int FUN_00232a6c(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0x10) >= 0x10) {
    return 0;
  }
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 4;
    if (*(int *)(temp_v0 + 0x18) == 0) break;
    if (*(int *)(temp_v0 + 0x1c) == 0) {
      temp_v1 = temp_v1 + 1;
      break;
    }
    temp_v1 = temp_v1 + 2;
  } while (temp_v1 < 0x20);
  if (param_2 != 0) {
    if (param_2 == 1) {
      temp_v0 = 0x9c;
      asdOperatorNew();
      if (temp_v0 != 0) {
        _ZN9Obj422338C1Ev();
      }
      *(int *)(param_1 + temp_v1 * 4 + 0x18) = temp_v0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x14) >= 4) {
      return 0;
    }
    temp_v0 = 0x80;
    asdOperatorNew();
    if (temp_v0 != 0) {
      FUN_00395558();
    }
    *(int *)(param_1 + temp_v1 * 4 + 0x18) = temp_v0;
  }
  temp_v1 = param_1 + temp_v1 * 4;
  callbackOwnerCreateOrReuseAndAssociateCallback(*(unsigned int *)(temp_v1 + 0x18),param_3);
  (**(romwright_code **)(**(int **)(temp_v1 + 0x18) + 8))();
  (**(romwright_code **)(**(int **)(*(int *)(temp_v1 + 0x18) + 0x68) + 8))();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return *(unsigned int *)(temp_v1 + 0x18);
}

} /* extern "C" */
