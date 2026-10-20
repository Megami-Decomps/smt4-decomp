#include "romwright_types.h"

extern "C" {

int FUN_002f4f20(unsigned char *, unsigned int);

extern unsigned char DAT_00594b1c; /* 0x594b1c */

/* Supplied declaration required: FUN_002f4f20. */


void FUN_001104d4(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002f4f20(&DAT_00594b1c,0xffffffff);
  return;
}

} /* extern "C" */
