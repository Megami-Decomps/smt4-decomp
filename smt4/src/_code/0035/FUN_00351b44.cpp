#include "romwright_types.h"

extern "C" {

int FUN_00360364(unsigned int *);

extern unsigned int DAT_00471bac; /* 0x471bac */

/* Supplied declaration required: FUN_00360364. */


void FUN_00351b44(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_00360364(&DAT_00471bac);
  return;
}

} /* extern "C" */
