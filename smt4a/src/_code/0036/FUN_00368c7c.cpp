#include "romwright_types.h"

extern "C" {

int FUN_00236038(int);
int FUN_002360dc(void);

/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_002360dc. */


unsigned int FUN_00368c7c(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002360dc();
  FUN_00236038(1);
  FUN_00236038(2);
  FUN_00236038(3);
  FUN_00236038(4);
  return 1;
}

} /* extern "C" */
