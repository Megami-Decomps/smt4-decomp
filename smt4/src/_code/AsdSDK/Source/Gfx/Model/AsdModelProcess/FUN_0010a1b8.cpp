#include "romwright_types.h"

extern "C" {

int FUN_002c415c(unsigned int *);
int FUN_002c43b4(unsigned int, int);

extern unsigned int DAT_00464be8; /* 0x464be8 */

extern int FUN_002bf244(unsigned int);
extern unsigned int *FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_0010a1b8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002c08f0();
  temp_v0 = FUN_002bf244(*puVar1);
  if (temp_v0 != 0) {
    FUN_002c43b4(*puVar1,0);
  }
  temp_v0 = FUN_002bf244(puVar1[1]);
  if (temp_v0 != 0) {
    FUN_002c43b4(puVar1[1],0);
  }
  temp_v0 = FUN_002bf244(puVar1[2]);
  if (temp_v0 != 0) {
    FUN_002c43b4(puVar1[2],0);
  }
  FUN_002c415c(puVar1);
  DAT_00464be8 = 0;
  return;
}

} /* extern "C" */
