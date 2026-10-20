#include "romwright_types.h"

extern "C" {

int FUN_0010701c(unsigned char *, unsigned int, unsigned int);

extern unsigned char DAT_0062e640; /* 0x62e640 */

/* Supplied declaration required: FUN_0010701c. */


void FUN_002ecedc(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_0010701c(&DAT_0062e640,param_1,param_2);
  return;
}

} /* extern "C" */
