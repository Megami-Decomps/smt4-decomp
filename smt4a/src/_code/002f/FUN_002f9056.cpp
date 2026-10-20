#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_002f9056(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x002f905c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(**(int **)(param_1 + 0x3c) + 0x28))(*(int *)(param_1 + 0x3c),param_2);
  return;
}

} /* extern "C" */
