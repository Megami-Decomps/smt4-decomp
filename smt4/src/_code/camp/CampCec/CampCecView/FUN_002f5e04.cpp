#include "romwright_types.h"

extern "C" {

int FUN_002c415c(...);
int FUN_002c43b4(unsigned int, int);
int FUN_00309e94(unsigned int);
int FUN_0031b970(unsigned int);

extern unsigned int *DAT_0043db10; /* 0x43db10 */

/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */
/* Supplied declaration required: FUN_00309e94. */
/* Supplied declaration required: FUN_0031b970. */


void FUN_002f5e04(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0043db10;
  FUN_0031b970(DAT_0043db10[0x4e]);
  temp_v0 = 0;
  do {
    FUN_00309e94(puVar1[temp_v0 + 0x4b]);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  FUN_002c415c(puVar1[0x58]);
  FUN_002c43b4(*puVar1,0);
  FUN_002c415c(puVar1);
  DAT_0043db10 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
