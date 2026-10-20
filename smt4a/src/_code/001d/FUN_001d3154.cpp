#include "romwright_types.h"

extern "C" {

int FUN_001d3490(int);

/* Supplied declaration required: FUN_001d3490. */


void FUN_001d3154(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_001d3490(param_1);
    return;
  }
  return;
}

} /* extern "C" */
