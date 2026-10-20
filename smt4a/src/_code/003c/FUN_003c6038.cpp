#include "romwright_types.h"

extern "C" {

int FUN_00137ea0(int);
int FUN_001386e8(int);
int FUN_00138cf8(int);
int asdMemFree(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00137ea0. */
/* Supplied declaration required: FUN_001386e8. */
/* Supplied declaration required: FUN_00138cf8. */
extern int jobGetWork(unsigned int);
/* Supplied declaration required: asdMemFree. */


void FUN_003c6038(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_001386e8(1);
  FUN_00137ea0(1);
  FUN_00138cf8(1);
  temp_v0 = jobGetWork(param_1);
  if (*(int *)(temp_v0 + 8) != 0) {
    asdMemFree();
  }
  asdMemFree(temp_v0);
  return;
}

} /* extern "C" */
