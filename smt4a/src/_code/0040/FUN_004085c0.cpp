#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;


void FUN_004085c0(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = (**(romwright_code **)(*(int *)(param_1 + 8) + 4))(*(unsigned int *)(param_1 + 4));
  *param_3 = temp_v0;
                    /* WARNING: Could not recover jumptable at 0x004085f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*(int *)(param_1 + 8) + 8))(*(unsigned int *)(param_1 + 4),param_2);
  return;
}

} /* extern "C" */
