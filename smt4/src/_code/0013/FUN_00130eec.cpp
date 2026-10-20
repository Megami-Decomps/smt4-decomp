#include "romwright_types.h"

extern "C" {

int FUN_002c38fc(int);

/* Supplied declaration required: FUN_002c38fc. */


void FUN_00130eec(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c38fc(param_1 + 0x1c4);
  return;
}

} /* extern "C" */
