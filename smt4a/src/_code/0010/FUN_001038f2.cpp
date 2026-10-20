#include "romwright_types.h"

extern "C" {

int FUN_0010d058(unsigned int, unsigned int);
int FUN_002e7a20(unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_0010d058. */
/* Supplied declaration required: FUN_002e7a20. */


void FUN_001038f2(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  FUN_0010d058(param_1,param_2);
  FUN_002e7a20(param_1,param_2,param_3);
  return;
}

} /* extern "C" */
