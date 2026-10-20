#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(void);
int FUN_00292bf0(void);

/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_00292bf0. */


unsigned int FUN_00221198(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_00292bf0();
  FUN_0028dcb0();
  return 1;
}

} /* extern "C" */
