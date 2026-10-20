#include "romwright_types.h"

extern "C" {

int FUN_002c415c(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002c415c. */


void FUN_00247200(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 8);
  while (temp_v0 != 0) {
    temp_v1 = *(int *)(temp_v0 + 0x40);
    FUN_002c415c(temp_v0);
    temp_v0 = temp_v1;
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_002c415c(*(int *)(param_1 + 4));
  }
  FUN_002c415c(param_1);
  return;
}

} /* extern "C" */
