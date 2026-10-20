#include "romwright_types.h"

extern "C" {

int FUN_00291730(unsigned int *);
int FUN_002c415c(unsigned int *);

extern unsigned int *DAT_0044cdf0; /* 0x44cdf0 */

/* Supplied declaration required: FUN_00291730. */
extern int FUN_002b2378(unsigned int);
/* Supplied declaration required: FUN_002c415c. */


unsigned int NaviMain_CheckClose(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0044cdf0;
  if (DAT_0044cdf0 != (unsigned int *)0x0) {
    temp_v0 = FUN_002b2378(*DAT_0044cdf0);
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 2) == '\0')) {
      return 1;
    }
    if (DAT_0044cdf0 != (unsigned int *)0x0) {
      FUN_00291730(DAT_0044cdf0 + 0x10);
      FUN_002c415c(DAT_0044cdf0);
      DAT_0044cdf0 = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
