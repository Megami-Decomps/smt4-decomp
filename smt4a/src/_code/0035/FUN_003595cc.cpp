#include "romwright_types.h"

extern "C" {

int FUN_001800b8(int);
int asdMemFree(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001800b8. */
/* Supplied declaration required: asdMemFree. */


void FUN_003595cc(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (*(int *)(temp_v0 + 0x20) != 0) {
    asdMemFree();
  }
  asdMemFree(*(unsigned int *)(temp_v0 + 8));
  asdMemFree(*param_1);
  FUN_001800b8(param_1[3]);
  asdMemFree(param_1);
  return;
}

} /* extern "C" */
