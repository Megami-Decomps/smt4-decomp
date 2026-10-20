#include "romwright_types.h"

extern "C" {

int FUN_0018c0d8(void);
int FUN_0028dcb0(void);

/* Supplied declaration required: FUN_0018c0d8. */
/* Supplied declaration required: FUN_0028dcb0. */


unsigned int FUN_001dc8a8(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_0018c0d8();
  FUN_0028dcb0();
  return 1;
}

} /* extern "C" */
