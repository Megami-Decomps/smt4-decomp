#include "romwright_types.h"

extern "C" {

int FUN_0010b47c(unsigned int, int);

/* Supplied declaration required: FUN_0010b47c. */


void FUN_00122dd0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0010b47c(*(unsigned int *)(param_1 + 0xc),1);
  return;
}

} /* extern "C" */
