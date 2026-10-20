#include "romwright_types.h"

extern "C" {

int FUN_003d2d34(unsigned int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_002009a8(unsigned int);
/* Supplied declaration required: FUN_003d2d34. */


void FUN_002de960(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x34);
  temp_v0 = FUN_002009a8(temp_v1);
  if (temp_v0 != 1 && temp_v0 != 2) {
    FUN_003d2d34(temp_v1,0,0x3c);
    return;
  }
  return;
}

} /* extern "C" */
