#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_004d9168. */


void FUN_004d9168(int param_1,unsigned int *param_2)

{
/* irregular: 3 native warning(s); review required */
  if (param_2 != (unsigned int *)(param_1 + 4)) {
    FUN_004d9168(param_1,(unsigned int *)*param_2);
    FUN_004d9168(param_1,(unsigned int *)param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x004d91a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(param_1 + 0x20))(param_1,param_2);
    return;
  }
  return;
}

} /* extern "C" */
