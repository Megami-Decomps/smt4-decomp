#include "romwright_types.h"

extern "C" {

int FUN_00291414(unsigned int);
int FUN_002916ac(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00291414. */
/* Supplied declaration required: FUN_002916ac. */


void FUN_001dcf78(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (param_1 != 0) {
    do {
      FUN_00291414(*(unsigned int *)(param_1 + temp_v0 * 4 + 0x238));
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x32);
    *(unsigned int *)(param_1 + 0x24) = 0;
    *(unsigned int *)(param_1 + 0x28) = 0;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    *(unsigned int *)(param_1 + 0x30) = 0;
    if (*(unsigned int **)(param_1 + 0x228) != (unsigned int *)0x0) {
      **(unsigned int **)(param_1 + 0x228) = 0;
    }
    FUN_002916ac(param_1);
    return;
  }
  return;
}

} /* extern "C" */
