#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(int);
int FUN_00237210(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_00237210. */


void FUN_0036c8f0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    FUN_00237210(*(unsigned int *)(param_1 + temp_v0 * 4));
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 10);
  FUN_0019a5a0(param_1);
  return;
}

} /* extern "C" */
