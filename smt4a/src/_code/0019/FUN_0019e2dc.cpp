#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(unsigned int *);

extern unsigned int *DAT_0057f578; /* 0x57f578 */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdMemFree. */


void FUN_0019e2dc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f578;
  jobStop(*DAT_0057f578,0);
  asdMemFree(puVar1);
  DAT_0057f578 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
