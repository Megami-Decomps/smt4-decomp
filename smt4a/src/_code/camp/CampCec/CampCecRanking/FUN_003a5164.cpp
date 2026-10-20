#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(...);
int FUN_0019a7f4(int, int);
int FUN_0019c364(void);
int FUN_00237210(unsigned int);

extern unsigned int *DAT_0057f11c; /* 0x57f11c */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_00237210. */


void FUN_003a5164(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0057f11c;
  FUN_0019a7f4(0x2e,1);
  temp_v0 = 0;
  do {
    FUN_00237210(puVar1[temp_v0 + 0x82]);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x14);
  temp_v0 = 0;
  do {
    FUN_00237210(puVar1[temp_v0 + 0x96]);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 7);
  if (puVar1[0x2e] != 0) {
    FUN_0019a5a0();
  }
  if (puVar1[0x2f] != 0) {
    FUN_0019a5a0();
  }
  if (puVar1[0x30] != 0) {
    FUN_0019c364();
  }
  FUN_001631d0(*puVar1,0);
  FUN_0019a5a0(puVar1);
  DAT_0057f11c = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
