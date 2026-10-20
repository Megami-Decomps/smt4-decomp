#include "romwright_types.h"

extern "C" {

int FUN_0030ffe0(unsigned int, unsigned int);

/* Supplied declaration required: FUN_0030ffe0. */


void FUN_002ee96a(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_0030ffe0(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_2 + 4));
  return;
}

} /* extern "C" */
