#include "romwright_types.h"

extern "C" {

int FUN_002e1344(void);
int FUN_0036ef0c(int);

/* Supplied declaration required: FUN_002e1344. */
/* Supplied declaration required: FUN_0036ef0c. */


void FUN_00241d58(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    FUN_002e1344();
    FUN_0036ef0c(param_1 + 0xc);
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}

} /* extern "C" */
