#include "romwright_types.h"

extern "C" {

int FUN_001800b8(unsigned int);
int FUN_0019a5a0(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001800b8. */
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_00222104(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = *param_1;
  temp_v0 = *(int *)(temp_v1 + 0x10) - 1;
  *(int *)(temp_v1 + 0x10) = temp_v0;
  if (temp_v0 == 0) {
    temp_v2 = 0;
    if (temp_v2 < *(int *)(temp_v1 + 0xc)) {
      do {
        FUN_001800b8(*(unsigned int *)(*(int *)(temp_v1 + 0x14) + temp_v2 * 4));
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < *(int *)(temp_v1 + 0xc));
    }
    FUN_0019a5a0(*(unsigned int *)(temp_v1 + 0x18));
  }
  FUN_0019a5a0(param_1);
  return;
}

} /* extern "C" */
