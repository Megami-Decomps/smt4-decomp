#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);

extern unsigned int *DAT_00588134; /* 0x588134 */

extern int FUN_00184e20(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */


unsigned int FUN_00298088(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_00588134;
  if (DAT_00588134 != (unsigned int *)0x0) {
    temp_v0 = FUN_00184e20(*DAT_00588134);
    if ((temp_v0 != 0) || (*(char *)((int)puVar1 + 0x11) == '\0')) {
      return 1;
    }
    if (DAT_00588134 != (unsigned int *)0x0) {
      FUN_0019a5a0();
      DAT_00588134 = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
