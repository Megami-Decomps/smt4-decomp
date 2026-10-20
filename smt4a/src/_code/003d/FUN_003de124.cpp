#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(unsigned int *);
int FUN_0049274c(unsigned int *);
int FUN_00493154(void);

extern unsigned int *DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0049274c. */
/* Supplied declaration required: FUN_00493154. */


void FUN_003de124(void)

{
/* irregular: 4 native warning(s); review required */
  FUN_00493154();
  if (DAT_00587f28 != (unsigned int *)0x0) {
    jobStop(*DAT_00587f28,0);
    FUN_0049274c(DAT_00587f28 + 0x1a);
    asdMemFree(DAT_00587f28);
    DAT_00587f28 = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
