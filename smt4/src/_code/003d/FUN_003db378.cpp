#include "romwright_types.h"

extern "C" {

int FUN_003da5e8(unsigned int);
int FUN_003dab2c(void);
int FUN_003db7dc(unsigned int);
int FUN_003dc68c(unsigned int);

/* Supplied declaration required: FUN_003da5e8. */
/* Supplied declaration required: FUN_003dab2c. */
/* Supplied declaration required: FUN_003db7dc. */
/* Supplied declaration required: FUN_003dc68c. */


unsigned int FUN_003db378(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  FUN_003dab2c();
  FUN_003da5e8(param_1);
  FUN_003db7dc(param_1);
  FUN_003dc68c(param_1);
  return 1;
}

} /* extern "C" */
