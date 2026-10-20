#include "romwright_types.h"

extern "C" {

int FUN_002e74bc(unsigned int);

/* Supplied declaration required: FUN_002e74bc. */


void FUN_002ed838(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e74bc(*(unsigned int *)(param_1 + 8));
  *(unsigned char *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  return;
}

} /* extern "C" */
