#include "romwright_types.h"

extern "C" {

int FUN_00303038(unsigned int, unsigned int);

/* Supplied declaration required: FUN_00303038. */


unsigned int FUN_00122692(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int *t;
  FUN_00303038(param_1,*(unsigned int *)(param_2 + 8));
  t = *(int **)(param_2 + 8);
  *(int *)(param_2 + 0x14) = t[4] * 8;
  return param_1;
}

} /* extern "C" */
