#include "romwright_types.h"

extern "C" {

int FUN_0019a46c(unsigned char *, unsigned int, int);

extern int DAT_005c0a8c; /* 0x5c0a8c */
extern unsigned char DAT_00642980; /* 0x642980 */

/* Supplied declaration required: FUN_0019a46c. */


void FUN_00427d34(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0019a46c(&DAT_00642980 + DAT_005c0a8c * 0x40,param_1,0x40);
  DAT_005c0a8c = DAT_005c0a8c + 1;
  return;
}

} /* extern "C" */
