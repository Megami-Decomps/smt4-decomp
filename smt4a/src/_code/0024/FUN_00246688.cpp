#include "romwright_types.h"

extern "C" {

int FUN_00203d04(int);

extern unsigned int *DAT_0058104c; /* 0x58104c */

/* Supplied declaration required: FUN_00203d04. */


void FUN_00246688(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0058104c;
  *DAT_0058104c = 0;
  puVar1[1] = 0;
  FUN_00203d04(1);
  return;
}

} /* extern "C" */
