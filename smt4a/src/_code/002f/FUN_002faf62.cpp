#include "romwright_types.h"

extern "C" {

int FUN_002e9f00(int, int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002e9f00. */
extern int *FUN_002fafba(int);


void FUN_002faf62(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  
  if ((*(int *)(param_1 + 0x90) != 0) &&
     (piVar1 = (int *)FUN_002fafba(param_1 + 0x90), piVar1 != (int *)0x0)) {
    (**(romwright_code **)(*piVar1 + 4))(piVar1);
  }
  if ((*(int *)(param_1 + 0x98) != 0) &&
     (piVar1 = (int *)FUN_002fafba(param_1 + 0x98), piVar1 != (int *)0x0)) {
    (**(romwright_code **)(*piVar1 + 4))(piVar1);
  }
  FUN_002e9f00(param_1 + 0xd0,4);
  if (*(int **)(param_1 + 0x1a8) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x1a8) + 4))(*(int **)(param_1 + 0x1a8));
    *(unsigned int *)(param_1 + 0x1a8) = 0;
  }
  return;
}

} /* extern "C" */
