#include "romwright_types.h"

extern "C" {

int FUN_002ad958(int);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002ad958. */


void FUN_00355e6c(unsigned int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  FUN_002ad958(1);
                    /* WARNING: Could not recover jumptable at 0x00355ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)*param_2)(param_2,param_1,param_3,param_4);
  return;
}

} /* extern "C" */
