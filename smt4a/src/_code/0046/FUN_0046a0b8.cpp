#include "romwright_types.h"

extern "C" {

int FUN_0019ea64(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0019ea64. */
extern int FUN_00224880(unsigned int);


void FUN_0046a0b8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00224880(**(unsigned int **)(param_1 + 0x2b4));
  if (temp_v0 == 2) {
    *(unsigned int *)(param_1 + 4) = 4;
    *(unsigned int *)(param_1 + 8) = 0;
    FUN_0019ea64(0);
    return;
  }
  return;
}

} /* extern "C" */
