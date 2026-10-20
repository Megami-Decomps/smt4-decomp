#include "romwright_types.h"

extern "C" {

int FUN_002c43b4(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002c43b4. */


void FUN_00207434(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002bf244(*(unsigned int *)(param_1 + 0x34));
  if (temp_v0 != 0) {
    FUN_002c43b4(*(unsigned int *)(param_1 + 0x34),0);
    return;
  }
  return;
}

} /* extern "C" */
