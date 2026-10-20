#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteB(unsigned int);
int holderDeleteObject(int);

extern int FUN_00102168(int);
/* Supplied declaration required: asdOperatorDeleteB. */
/* Supplied declaration required: holderDeleteObject. */


void FUN_002e4e6c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  asdOperatorDeleteB(*(unsigned int *)(param_1 + 0x18));
  temp_v0 = FUN_00102168(param_1 + 8);
  holderDeleteObject(temp_v0 - 8);
  return;
}

} /* extern "C" */
