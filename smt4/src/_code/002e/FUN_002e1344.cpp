#include "romwright_types.h"

extern "C" {

int FUN_002c0894(int);
int asdMemFree(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002c0894. */
/* Supplied declaration required: asdMemFree. */


void FUN_002e1344(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (*(int *)(temp_v0 + 0x20) != 0) {
    asdMemFree();
  }
  asdMemFree(*(unsigned int *)(temp_v0 + 8));
  asdMemFree(*param_1);
  FUN_002c0894(param_1[3]);
  asdMemFree(param_1);
  return;
}

} /* extern "C" */
