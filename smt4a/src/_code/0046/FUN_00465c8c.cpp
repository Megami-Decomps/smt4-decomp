#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;


void FUN_00465c8c(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x00465cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(**(int **)(param_1 + 0x80) + 8))(*(int **)(param_1 + 0x80),param_1,param_2,param_3);
  return;
}

} /* extern "C" */
