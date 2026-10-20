#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(unsigned int *);
int FUN_001add24(int);
int FUN_00321744(void);

extern unsigned int *DAT_0057f2c4; /* 0x57f2c4 */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_001add24. */
/* Supplied declaration required: FUN_00321744. */


void FUN_0038b79c(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f2c4;
  FUN_001add24(0x25);
  FUN_00321744();
  jobStop(*puVar1,0);
  asdMemFree(puVar1);
  DAT_0057f2c4 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
