#include "romwright_types.h"

extern "C" {

int FUN_00152bec(void);

extern int DAT_00447e70; /* 0x447e70 */

/* Supplied declaration required: FUN_00152bec. */


void FUN_001d3694(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    int off = temp_v0 * 0x48;
    if (*(int *)(DAT_00447e70 + off + 0x3c) != 0) {
      FUN_00152bec();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x18);
  return;
}

} /* extern "C" */
