#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(void);
int FUN_002c5ef0(void);

/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_002c5ef0. */


unsigned int FUN_003112d8(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c5ef0();
  FUN_0028dcb0();
  return 1;
}

} /* extern "C" */
