#include "romwright_types.h"

extern "C" {

int FUN_002ea928(int);

/* Supplied declaration required: FUN_002ea928. */


void FUN_002eacbc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ea928(param_1 + 8);
  return;
}

} /* extern "C" */
