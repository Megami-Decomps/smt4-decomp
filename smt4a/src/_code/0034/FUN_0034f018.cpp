#include "romwright_types.h"

extern "C" {

int FUN_00184758(int, int, int);

/* Supplied declaration required: FUN_00184758. */


void FUN_0034f018(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00184758(param_1 + 0x2dc,3,1);
  return;
}

} /* extern "C" */
