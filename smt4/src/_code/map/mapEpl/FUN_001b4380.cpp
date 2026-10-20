#include "romwright_types.h"

extern "C" {

int FUN_002c2264(int);
int FUN_002c415c(int);

extern int DAT_00447a10; /* 0x447a10 */

/* Supplied declaration required: FUN_002c2264. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_001b4380(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 * 0x18 + DAT_00447a10 + 8;
    if (*(int *)(temp_v0 + 0x14) != 0) {
      FUN_002c2264(*(int *)(temp_v0 + 0x14));
      *(unsigned int *)(temp_v0 + 0x14) = 0;
    }
    if (*(int *)(temp_v0 + 0x10) != 0) {
      FUN_002c415c(*(int *)(temp_v0 + 0x10));
      *(unsigned int *)(temp_v0 + 0x10) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  if (DAT_00447a10 != 0) {
    FUN_002c415c(DAT_00447a10);
    DAT_00447a10 = 0;
  }
  return;
}

} /* extern "C" */
