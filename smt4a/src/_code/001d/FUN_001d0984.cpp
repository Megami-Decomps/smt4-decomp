#include "romwright_types.h"

extern "C" {

int FUN_001c7bf0(unsigned int, unsigned int);

/* Supplied declaration required: FUN_001c7bf0. */


void FUN_001d0984(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_001c7bf0(*(unsigned int *)(param_1 + param_2 * 4),param_3);
  return;
}

} /* extern "C" */
