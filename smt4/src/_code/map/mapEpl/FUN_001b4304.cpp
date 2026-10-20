#include "romwright_types.h"

extern "C" {

int FUN_00281bb0(void);

extern int DAT_00447a10; /* 0x447a10 */

/* Supplied declaration required: FUN_00281bb0. */


void FUN_001b4304(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)(DAT_00447a10 + temp_v0 * 0x18 + 0x1c) != 0) {
      FUN_00281bb0();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x10);
  return;
}

} /* extern "C" */
