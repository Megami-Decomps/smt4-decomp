/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032fb18` (_code @ 0x32fb18, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f134; /* 0x57f134 */

/* Supplied declaration required: FUN_002613f0. */


int FUN_0032fb18(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  short *psVar2;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0057f134;
  if (DAT_0057f134 == 0) {
    param_1 = 0;
  }
  if (DAT_0057f134 != 0 && param_1 != 0) {
    temp_v2 = 0;
    do {
      psVar2 = (short *)FUN_002613f0(temp_v2);
      if (*psVar2 == *(short *)(param_1 + 0x62)) {
        temp_v1 = FUN_002613f0(temp_v2);
        if ((((*(short *)(temp_v1 + 2) != 0) ||
             (temp_v1 = FUN_002613f0(temp_v2), *(short *)(temp_v1 + 4) != 0)) ||
            (temp_v1 = FUN_002613f0(temp_v2), *(short *)(temp_v1 + 6) != 0)) && (-1 < temp_v2)) {
          *(int *)(temp_v0 + 0x2c) = temp_v2;
          *(unsigned int *)(temp_v0 + 8) = 0;
          *(unsigned char *)(temp_v0 + 4) = 3;
          return 1;
        }
        break;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x18);
    param_1 = 0;
  }
  return param_1;
}
