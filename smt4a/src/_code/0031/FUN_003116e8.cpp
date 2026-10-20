#include "romwright_types.h"

extern "C" {

int onlineObjectThreadRootStart(int, unsigned int);

/* Supplied declaration required: onlineObjectThreadRootStart. */


void FUN_003116e8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x30) = param_5;
  *(unsigned int *)(param_1 + 0x28) = param_4;
  *(unsigned int *)(param_1 + 0x24) = param_3;
  *(unsigned int *)(param_1 + 0x2c) = param_2;
  onlineObjectThreadRootStart(param_1,param_6);
  return;
}

} /* extern "C" */
