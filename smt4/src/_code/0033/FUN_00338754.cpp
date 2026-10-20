#include "romwright_types.h"

extern "C" {

int FUN_00288728(void);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_00288728. */


void FUN_00338754(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x4394) != 0) {
    FUN_00288728();
    if (*(int **)(param_1 + 0x4394) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(param_1 + 0x4394) + 4))(*(int **)(param_1 + 0x4394));
    }
    *(unsigned int *)(param_1 + 0x4394) = 0;
  }
  return;
}

} /* extern "C" */
