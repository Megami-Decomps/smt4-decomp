#include "romwright_types.h"

extern "C" {

int FUN_001927c0(unsigned int *);
int FUN_0019a5a0(unsigned int *);

extern unsigned int *DAT_00580238; /* 0x580238 */

extern int FUN_00184e20(unsigned int);
/* Supplied declaration required: FUN_001927c0. */
/* Supplied declaration required: FUN_0019a5a0. */


unsigned int FUN_00164a34(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_00580238;
  if (DAT_00580238 != (unsigned int *)0x0) {
    temp_v0 = FUN_00184e20(*DAT_00580238);
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 2) == '\0')) {
      return 1;
    }
    if (DAT_00580238 != (unsigned int *)0x0) {
      FUN_001927c0(DAT_00580238 + 0x3d);
      FUN_0019a5a0(DAT_00580238);
      DAT_00580238 = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
