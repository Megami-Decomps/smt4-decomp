#include "romwright_types.h"

extern "C" {

int FUN_0032cb48(int);

extern int DAT_00581274; /* 0x581274 */

/* Supplied declaration required: FUN_0032cb48. */


void FUN_003a2ecc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  
  temp_v0 = '\0';
  if (DAT_00581274 != 0) {
    temp_v0 = *(char *)(DAT_00581274 + 0x40);
  }
  if (DAT_00581274 == 0 || temp_v0 == '\0') {
    return;
  }
  FUN_0032cb48(param_1);
  return;
}

} /* extern "C" */
