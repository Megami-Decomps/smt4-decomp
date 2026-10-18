/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028c13c` (_code @ 0x28c13c, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00434210; /* 0x434210 */

/* Supplied declaration required: FUN_002bf030. */


void FUN_0028c13c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_00434210;
  if (DAT_00434210 != 0) {
    temp_v2 = 0;
    do {
      temp_v1 = temp_v0 + temp_v2 * 0x8c;
      if (*(int *)(temp_v1 + 0x68) != 0) {
        FUN_002bf030(temp_v1 + 0x20,1);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 5);
    *(unsigned char *)(temp_v0 + 0x2f5) = 0;
  }
  return;
}
