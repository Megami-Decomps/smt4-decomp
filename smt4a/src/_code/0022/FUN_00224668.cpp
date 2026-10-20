#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(unsigned int *);
int FUN_0049274c(unsigned int *);

extern unsigned int *DAT_00587f28; /* 0x587f28 */

extern int FUN_00184e20(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0049274c. */


unsigned int FUN_00224668(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_00587f28;
  if (DAT_00587f28 != (unsigned int *)0x0) {
    temp_v0 = FUN_00184e20(*DAT_00587f28);
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 2) == '\0')) {
      return 1;
    }
    if (DAT_00587f28 != (unsigned int *)0x0) {
      FUN_0049274c(DAT_00587f28 + 0x1a);
      FUN_0019a5a0(DAT_00587f28);
      DAT_00587f28 = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
