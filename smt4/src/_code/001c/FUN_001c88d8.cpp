#include "romwright_types.h"

extern "C" {

int FUN_002a46d8(int);
int FUN_002a7218(unsigned int);
int FUN_002ae898(int, int);
int FUN_002bff50(void);
int FUN_002c415c(...);

extern int DAT_0044dc20; /* 0x44dc20 */

/* Supplied declaration required: FUN_002a46d8. */
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002bff50. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_001c88d8(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0044dc20;
  if (DAT_0044dc20 != 0) {
    FUN_002a7218(*(unsigned int *)(DAT_0044dc20 + 0x3568));
    FUN_002c415c(*(unsigned int *)(temp_v0 + 0x3564));
    FUN_002c415c(*(unsigned int *)(temp_v0 + 0x356c));
    FUN_002bff50();
    FUN_002c415c(*(unsigned int *)(temp_v0 + 0x3570));
    FUN_002a46d8(0x14);
    FUN_002a46d8(0x25);
    temp_v0 = 0;
    do {
      FUN_002ae898(0x28,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 2);
    FUN_002c415c(DAT_0044dc20);
    DAT_0044dc20 = 0;
  }
  return;
}

} /* extern "C" */
