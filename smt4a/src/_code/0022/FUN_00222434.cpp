#include "romwright_types.h"

extern "C" {

int FUN_001800b8(unsigned int);
int FUN_0019a5a0(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001800b8. */
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_00222434(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 0x1c) - 1;
  *(int *)(param_1 + 0x1c) = temp_v0;
  if (temp_v0 == 0) {
    for (temp_v1 = 0; temp_v1 < *(unsigned int *)(param_1 + 4); temp_v1++) {
      FUN_001800b8(*(unsigned int *)(*(int *)(param_1 + 0x14) + temp_v1 * 4));
    }
    FUN_0019a5a0(*(unsigned int *)(param_1 + 0x24));
    return;
  }
  return;
}

} /* extern "C" */
