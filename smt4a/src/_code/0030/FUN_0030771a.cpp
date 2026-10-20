#include "romwright_types.h"

extern "C" {

int FUN_002e6dac(int);

/* Supplied declaration required: FUN_002e6dac. */


void FUN_0030771a(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e6dac(param_2 << 2);
  return;
}

} /* extern "C" */
