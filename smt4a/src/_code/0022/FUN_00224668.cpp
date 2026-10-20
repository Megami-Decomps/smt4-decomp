#include "romwright_types.h"

extern "C" {

int asdMemFree(unsigned int *);
int FUN_0049274c(unsigned int *);

extern unsigned int *DAT_00587f28; /* 0x587f28 */

extern int jobFind(unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0049274c. */


unsigned int FUN_00224668(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_00587f28;
  if (DAT_00587f28 != (unsigned int *)0x0) {
    temp_v0 = jobFind(*DAT_00587f28);
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 2) == '\0')) {
      return 1;
    }
    if (DAT_00587f28 != (unsigned int *)0x0) {
      FUN_0049274c(DAT_00587f28 + 0x1a);
      asdMemFree(DAT_00587f28);
      DAT_00587f28 = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
