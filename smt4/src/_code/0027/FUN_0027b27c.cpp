#include "romwright_types.h"

extern "C" {

int FUN_002d2efc(char *);

extern int DAT_00447a60; /* 0x447a60 */

/* Supplied declaration required: FUN_002d2efc. */


void FUN_0027b27c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    int base = DAT_00447a60;
    char *p = (char *)(base + temp_v0 * 0x3c + 0x24);
    if (*p != '\0') {
      FUN_002d2efc(p);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x10);
  return;
}

} /* extern "C" */
