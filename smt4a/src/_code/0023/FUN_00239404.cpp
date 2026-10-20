#include "romwright_types.h"

extern "C" {

int FUN_00312830(unsigned int, unsigned int, int, int);

/* Supplied declaration required: FUN_00312830. */


void FUN_00239404(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_00312830(param_1,param_2,0x20,0x33706c);
  return;
}

} /* extern "C" */
