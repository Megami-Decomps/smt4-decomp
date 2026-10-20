#include "romwright_types.h"

extern "C" {

int FUN_002a7218(unsigned int);
int FUN_002a780c(unsigned int);
int FUN_002c415c(...);
int FUN_002c43b4(unsigned int, int);
int FUN_00309e94(unsigned int);
int FUN_0031b970(unsigned int);

extern unsigned int *DAT_0043dad0; /* 0x43dad0 */

/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002a780c. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */
/* Supplied declaration required: FUN_00309e94. */
/* Supplied declaration required: FUN_0031b970. */


void FUN_002f5ba0(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043dad0;
  FUN_002c415c(DAT_0043dad0[0x29]);
  FUN_002c415c(puVar1[0x2a]);
  FUN_002c415c(puVar1[0x2b]);
  FUN_002a780c(puVar1[0x2c]);
  FUN_002a7218(puVar1[0x28]);
  FUN_0031b970(puVar1[4]);
  FUN_00309e94(puVar1[3]);
  FUN_002c43b4(*puVar1,0);
  FUN_002c415c(puVar1);
  DAT_0043dad0 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
