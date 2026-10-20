#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_001213a2(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (((*(char *)(param_1 + 4) != '\x03') && (*(char *)(param_1 + 0x41) != '\0')) &&
     (*(int **)(param_1 + 0x3c) != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x001213ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(**(int **)(param_1 + 0x3c) + 0x14))(*(int **)(param_1 + 0x3c));
    return;
  }
  return;
}

} /* extern "C" */
