#include "romwright_types.h"

extern "C" {

int FUN_002c415c(void);

extern unsigned int *DAT_00432ce0; /* 0x432ce0 */

extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002c415c. */


unsigned int FUN_001eb33c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_00432ce0;
  if (DAT_00432ce0 != (unsigned int *)0x0) {
    temp_v0 = FUN_002bf244(*DAT_00432ce0);
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 1) == '\0')) {
      return 1;
    }
    if (DAT_00432ce0 != (unsigned int *)0x0) {
      FUN_002c415c();
      DAT_00432ce0 = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
