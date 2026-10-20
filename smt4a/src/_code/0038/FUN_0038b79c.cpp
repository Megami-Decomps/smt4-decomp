#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(unsigned int *);
int FUN_001add24(int);
int FUN_00321744(void);

extern unsigned int *DAT_0057f2c4; /* 0x57f2c4 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001add24. */
/* Supplied declaration required: FUN_00321744. */


void FUN_0038b79c(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f2c4;
  FUN_001add24(0x25);
  FUN_00321744();
  FUN_001631d0(*puVar1,0);
  FUN_0019a5a0(puVar1);
  DAT_0057f2c4 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
