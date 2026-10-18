/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024de78` (_code @ 0x24de78, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433278; /* 0x433278 */
extern unsigned char DAT_00478000; /* 0x478000 */

/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c4b30. */


void FUN_0024de78(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  if (temp_v1 < DAT_00433278) {
    do {
      temp_v0 = temp_v1 * 0x148;
      if (*(int *)(temp_v0 + 0x47813c) != 0) {
        FUN_002c4360();
        *(unsigned int *)(temp_v0 + 0x47813c) = 0;
        *(unsigned int *)(temp_v0 + 0x478028) = 0;
      }
      if (*(int *)(temp_v0 + 0x478024) != 0) {
        FUN_002c4360();
        *(unsigned int *)(temp_v0 + 0x478024) = 0;
        *(unsigned int *)(temp_v0 + 0x478020) = 0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_00433278);
  }
  FUN_002c4b30(&DAT_00478000,0x5200);
  DAT_00433278 = 0;
  return;
}
