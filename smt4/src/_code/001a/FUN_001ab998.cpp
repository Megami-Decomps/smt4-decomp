#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_001ab998(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (param_1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001ab9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(*param_1 + 4))(param_1);
    return;
  }
  return;
}

} /* extern "C" */
