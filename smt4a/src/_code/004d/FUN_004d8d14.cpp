#include "romwright_types.h"

extern "C" {

int FUN_002c2358(void);
int FUN_0040132c(int);

/* Supplied declaration required: FUN_002c2358. */
/* Supplied declaration required: FUN_0040132c. */


void FUN_004d8d14(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0xc0) != 0) {
    *(unsigned int *)(param_1 + 0xc0) = 0;
  }
  FUN_002c2358();
  FUN_0040132c(param_1);
  *(unsigned int *)(param_1 + 0xa0) = 0;
  return;
}

} /* extern "C" */
