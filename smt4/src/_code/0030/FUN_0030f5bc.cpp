#include "romwright_types.h"

extern "C" {

int FUN_002cc07c(int);

extern int DAT_00447e28; /* 0x447e28 */

/* Supplied declaration required: FUN_002cc07c. */


void FUN_0030f5bc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  
  temp_v0 = '\0';
  if (DAT_00447e28 != 0) {
    temp_v0 = *(char *)(DAT_00447e28 + 0x3c);
  }
  if (DAT_00447e28 == 0 || temp_v0 == '\0') {
    return;
  }
  FUN_002cc07c(param_1);
  return;
}

} /* extern "C" */
