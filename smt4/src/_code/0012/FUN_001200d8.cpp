#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_001200d8(int param_1)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x001200e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8));
  return;
}

} /* extern "C" */
