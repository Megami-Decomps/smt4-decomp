/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026ca24` (_code @ 0x26ca24, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e0f8; /* 0x43e0f8 */

/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002c5ff4. */


void FUN_0026ca24(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043e0f8;
  *(unsigned char *)(DAT_0043e0f8 + 0x10) = 0;
  if (param_1 != 0) {
    FUN_002c4b30(temp_v0 + 0x154,0x31);
    temp_v1 = 0;
    do {
      if (*(char *)(param_1 + temp_v1) == '\0') {
        FUN_002c5ff4(temp_v0 + 0x154,param_1,temp_v1 + 1);
        *(unsigned char *)(temp_v0 + 0x10) = 1;
        return;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x31);
  }
  return;
}
