#include "romwright_types.h"

extern "C" {

int FUN_002a46d8(int);
int scrScriptProcessDestroy(unsigned int);
int FUN_002ae898(int, int);
int FUN_002bff50(void);
int asdMemFree(...);

extern int DAT_0044dc20; /* 0x44dc20 */

/* Supplied declaration required: FUN_002a46d8. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002bff50. */
/* Supplied declaration required: asdMemFree. */


void FUN_001c88d8(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0044dc20;
  if (DAT_0044dc20 != 0) {
    scrScriptProcessDestroy(*(unsigned int *)(DAT_0044dc20 + 0x3568));
    asdMemFree(*(unsigned int *)(temp_v0 + 0x3564));
    asdMemFree(*(unsigned int *)(temp_v0 + 0x356c));
    FUN_002bff50();
    asdMemFree(*(unsigned int *)(temp_v0 + 0x3570));
    FUN_002a46d8(0x14);
    FUN_002a46d8(0x25);
    temp_v0 = 0;
    do {
      FUN_002ae898(0x28,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 2);
    asdMemFree(DAT_0044dc20);
    DAT_0044dc20 = 0;
  }
  return;
}

} /* extern "C" */
