#include "romwright_types.h"

extern "C" {

int FUN_0028c940(int, int);

extern unsigned char DAT_0057f0bc; /* 0x57f0bc */

/* Supplied declaration required: FUN_0028c940. */


void FUN_00270b7c(void)

{
/* irregular: 1 native warning(s); review required */
  (*(unsigned int *)((unsigned char *)&DAT_0057f0bc + 0x4)) = 0;
  FUN_0028c940(0,0);
  return;
}

} /* extern "C" */
