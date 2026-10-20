#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);

extern unsigned int *DAT_005806c4; /* 0x5806c4 */

extern int FUN_00184e20(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */


unsigned int FUN_002b5dac(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_005806c4;
  if (DAT_005806c4 != (unsigned int *)0x0) {
    temp_v0 = FUN_00184e20(*DAT_005806c4);
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 2) == '\0')) {
      return 1;
    }
    if (DAT_005806c4 != (unsigned int *)0x0) {
      FUN_0019a5a0();
      DAT_005806c4 = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
