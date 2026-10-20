#include "romwright_types.h"

extern "C" {

int FUN_001234e0(void);

/* Supplied declaration required: FUN_001234e0. */


void FUN_001107e4(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_001234e0();
  return;
}

} /* extern "C" */
