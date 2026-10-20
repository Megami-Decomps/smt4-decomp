#include "romwright_types.h"

extern "C" {

int FUN_002592d8(void);
int FUN_00296cc8(int);

/* Supplied declaration required: FUN_002592d8. */
/* Supplied declaration required: FUN_00296cc8. */


unsigned int FUN_002eb248(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002592d8();
  FUN_00296cc8(1);
  FUN_00296cc8(2);
  FUN_00296cc8(3);
  FUN_00296cc8(4);
  return 1;
}

} /* extern "C" */
