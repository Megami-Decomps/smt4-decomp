#include "romwright_types.h"

extern "C" {

int FUN_002a7218(void);
int FUN_002c415c(void);

/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_0027369c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_002a7218();
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  return;
}

} /* extern "C" */
