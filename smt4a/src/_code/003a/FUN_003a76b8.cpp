#include "romwright_types.h"

extern "C" {

int FUN_001add24(int);

/* Supplied declaration required: FUN_001add24. */


void FUN_003a76b8(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_001add24(0x44);
  return;
}

} /* extern "C" */
