#include "romwright_types.h"

extern "C" {

int FUN_001add24(int);

/* Supplied declaration required: FUN_001add24. */


void FUN_00330b74(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_001add24(0x46);
  return;
}

} /* extern "C" */
