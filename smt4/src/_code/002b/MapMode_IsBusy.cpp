#include "romwright_types.h"

extern "C" {

int FUN_002c415c(void);

extern unsigned int *DAT_00447e28; /* 0x447e28 */

extern int FUN_002b2378(unsigned int);
/* Supplied declaration required: FUN_002c415c. */


unsigned int MapMode_IsBusy(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_00447e28;
  if (DAT_00447e28 != (unsigned int *)0x0) {
    temp_v0 = FUN_002b2378(*DAT_00447e28);
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 3) == '\0')) {
      return 1;
    }
    if (DAT_00447e28 != (unsigned int *)0x0) {
      FUN_002c415c();
      DAT_00447e28 = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
