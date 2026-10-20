#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(void);
int FUN_002903f0(void);

/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_002903f0. */


unsigned int FUN_003112c4(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002903f0();
  FUN_0028dcb0();
  return 1;
}

} /* extern "C" */
