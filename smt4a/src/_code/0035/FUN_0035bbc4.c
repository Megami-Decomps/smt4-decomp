/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035bbc4` (_code @ 0x35bbc4, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005702f8; /* 0x5702f8 */
extern unsigned char DAT_005c6000; /* 0x5c6000 */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e6354. */


void FUN_0035bbc4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  if (temp_v1 < DAT_005702f8) {
    do {
      temp_v0 = temp_v1 * 0x148;
      if (*(int *)(temp_v0 + 0x5c613c) != 0) {
        FUN_0019a5a0();
        *(unsigned int *)(temp_v0 + 0x5c613c) = 0;
        *(unsigned int *)(temp_v0 + 0x5c6028) = 0;
      }
      if (*(int *)(temp_v0 + 0x5c6024) != 0) {
        FUN_0019a5a0();
        *(unsigned int *)(temp_v0 + 0x5c6024) = 0;
        *(unsigned int *)(temp_v0 + 0x5c6020) = 0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_005702f8);
  }
  FUN_002e6354(&DAT_005c6000,0x5200);
  DAT_005702f8 = 0;
  return;
}
