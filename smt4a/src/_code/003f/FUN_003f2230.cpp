#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;


void FUN_003f2230(int param_1,int param_2,unsigned int param_3)

{
  param_1 = param_1 + param_2 * 4;
  *(unsigned int *)(param_1 + 0x4d30) = 0;
  *(unsigned int *)(param_1 + 0x4d38) = 0;
  *(unsigned int *)(param_1 + 0x4d40) = param_3;
  *(unsigned int *)(param_1 + 0x4d20) = *(unsigned int *)(param_1 + 0x4d18);
  *(unsigned int *)(param_1 + 0x4d28) = 0;
  return;
}

} /* extern "C" */
