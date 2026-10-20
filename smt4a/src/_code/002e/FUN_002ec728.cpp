#include "romwright_types.h"

extern "C" {

int FUN_003105b0(int, int);

/* Supplied declaration required: FUN_003105b0. */


int FUN_002ec728(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int a = param_1 + 0xc;
  int b = param_2 + 0xc;
  FUN_003105b0(a,b);
  return param_1;
}

} /* extern "C" */
