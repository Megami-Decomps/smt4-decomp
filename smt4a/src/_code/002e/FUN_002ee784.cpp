#include "romwright_types.h"

extern "C" {

int FUN_002e98d4(int);

/* Supplied declaration required: FUN_002e98d4. */


void FUN_002ee784(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_2 != param_1 + 0x10) {
    FUN_002e98d4(param_2);
  }
  return;
}

} /* extern "C" */
