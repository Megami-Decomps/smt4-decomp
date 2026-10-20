#include "romwright_types.h"

extern "C" {

int FUN_0043a560(unsigned int *);

extern unsigned int DAT_005c0b4c; /* 0x5c0b4c */

/* Supplied declaration required: FUN_0043a560. */


void FUN_00426140(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0043a560(&DAT_005c0b4c);
  return;
}

} /* extern "C" */
