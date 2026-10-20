#include "romwright_types.h"

extern "C" {

int FUN_001285b8(unsigned int, int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_001285b8. */


void FUN_00128638(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_001285b8(param_1,0xf,param_2,param_3);
  return;
}

} /* extern "C" */
