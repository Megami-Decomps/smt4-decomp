#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_002628fc(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (param_1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0026290c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(*param_1 + 4))(param_1);
    return;
  }
  return;
}

} /* extern "C" */
