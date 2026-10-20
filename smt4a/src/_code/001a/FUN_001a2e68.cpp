#include "romwright_types.h"

extern "C" {

int FUN_001af148(unsigned int *);

extern unsigned int DAT_005b445c; /* 0x5b445c */

/* Supplied declaration required: FUN_001af148. */


void FUN_001a2e68(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_001af148(&DAT_005b445c);
  return;
}

} /* extern "C" */
