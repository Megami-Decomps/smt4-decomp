#include "romwright_types.h"

extern "C" {

int FUN_00152bec(void);
int FUN_002a775c(unsigned int);

/* Supplied declaration required: FUN_00152bec. */
/* Supplied declaration required: FUN_002a775c. */


void FUN_00341a10(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00152bec();
    FUN_002a775c(*(unsigned int *)(param_1 + 0x28));
    *(unsigned int *)(param_1 + 0x28) = 0;
  }
  return;
}

} /* extern "C" */
