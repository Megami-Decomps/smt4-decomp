#include "romwright_types.h"

extern "C" {

int FUN_001af214(unsigned int *);

extern unsigned int DAT_005b445c; /* 0x5b445c */

/* Supplied declaration required: FUN_001af214. */


void FUN_0018b9d4(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_001af214(&DAT_005b445c);
  return;
}

} /* extern "C" */
