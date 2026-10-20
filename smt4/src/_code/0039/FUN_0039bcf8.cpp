#include "romwright_types.h"

extern "C" {

int FUN_002c3944(int, int);

/* Supplied declaration required: FUN_002c3944. */


void FUN_0039bcf8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c3944(param_1 + 0x62,0x100);
  return;
}

} /* extern "C" */
