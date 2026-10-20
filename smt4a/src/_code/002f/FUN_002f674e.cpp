#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_002f674e(int param_1)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x002f6756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(**(int **)(param_1 + 4) + 0x50))(*(int **)(param_1 + 4),param_1);
  return;
}

} /* extern "C" */
